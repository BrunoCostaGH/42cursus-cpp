/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:13:48 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/20 23:00:29 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	memset(this->materia, 0, sizeof(AMateria *) * 4);
}

MateriaSource::MateriaSource(MateriaSource &value)
{
	*this = value;
	memcpy(this->materia, value.materia, sizeof(AMateria *) * 4);
}

MateriaSource &MateriaSource::operator=(const MateriaSource &value)
{
	memcpy(this->materia, value.materia, sizeof(AMateria *) * 4);
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; ++i)
		if (this->materia[i])
			delete (this->materia[i]);
}

void MateriaSource::learnMateria(AMateria *value)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!this->materia[i])
		{
			this->materia[i] = value;
			break;
		}
	}
}

AMateria * MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; ++i)
		if (this->materia[i]->getType() == type)
			return (this->materia[i]->clone());
	return (0);
}
