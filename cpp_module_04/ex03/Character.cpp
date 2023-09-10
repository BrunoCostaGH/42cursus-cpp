/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:04:06 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/21 18:55:49 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include "Character.hpp"

Character::Character(void)
{
	memset(this->materia, 0, sizeof(AMateria*) * 4);
	memset(this->unequippedMateria, 0, sizeof(AMateria*) * 4);
}

Character::Character(const std::string& name)
{
	this->name = name;
	memset(this->materia, 0, sizeof(AMateria*) * 4);
	memset(this->unequippedMateria, 0, sizeof(AMateria*) * 4);
}

Character::Character(const Character& value)
{
	*this = value;
	this->name = value.name;
	memcpy(this->materia, value.materia, sizeof(AMateria*) * 4);
	memcpy(this->unequippedMateria,
		   value.unequippedMateria,
		   sizeof(AMateria*) * 4);
}

Character& Character::operator=(const Character& value)
{
	this->name = value.name;
	memcpy(this->materia, value.materia, sizeof(AMateria*) * 4);
	memcpy(this->unequippedMateria,
		   value.unequippedMateria,
		   sizeof(AMateria*) * 4);
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; ++i)
		if (this->materia[i])
			delete (this->materia[i]);
	for (int i = 0; i < 4; ++i)
		if (this->unequippedMateria[i])
			delete (this->unequippedMateria[i]);
}

const std::string& Character::getName(void) const
{
	return (this->name);
}

void Character::equip(AMateria* m)
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
	if (idx > 0 && idx < 3 && this->materia[idx])
	{
		if (this->unequippedMateria[3])
		{
			if (this->unequippedMateria[0])
				delete this->unequippedMateria[0];
			for (int i = 1; i < 4; ++i)
				this->materia[i - 1] = this->materia[i];
			this->materia[3] = 0;
			this->unequippedMateria[3] = this->materia[idx];
		}
		else
		{
			for (int i = 0; i < 4; ++i)
			{
				if (!this->materia[i])
				{
					this->unequippedMateria[i] = this->materia[idx];
					break;
				}
			}
		}
		this->materia[idx] = 0;
	}
}

void Character::use(int idx, ICharacter& target)
{
	for (int i = 0; i < 4; ++i)
		if (i == idx)
			this->materia[i]->use(target);
}
