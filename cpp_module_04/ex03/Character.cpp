/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:04:06 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/20 23:03:08 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include "Character.hpp"

Character::Character(void)
{
	memset(this->materia, 0, sizeof(AMateria *) * 4);
}

Character::Character(const std::string& name)
{
	this->name = name;
	memset(this->materia, 0, sizeof(AMateria *) * 4);
}

Character::Character(Character &value)
{
	*this = value;
	memcpy(this->materia, value.materia, sizeof(AMateria *) * 4);
}

Character &Character::operator=(const Character &value)
{
	this->name = value.name;
	memcpy(this->materia, value.materia, sizeof(AMateria *) * 4);
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; ++i)
		if (this->materia[i])
			delete (this->materia[i]);
}

const std::string &Character::getName(void) const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!this->materia[i])
		{
			this->materia[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	for (int i = 0; i < 4; ++i)
	{
		if (i == idx)
		{
			while (++i < 4)
				this->materia[i - 1] = this->materia[i];
			this->materia[i - 1] = 0;
			break;
		}
	}
}

void Character::use(int idx, ICharacter &target)
{
	for (int i = 0; i < 4; ++i)
		if (i == idx)
			this->materia[i]->use(target);
}
