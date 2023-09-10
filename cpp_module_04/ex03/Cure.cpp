/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:03:06 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/20 22:54:07 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
}

Cure::Cure(const Cure& value) : AMateria(value)
{
	*this = value;
	this->type = value.type;
}

Cure& Cure::operator=(const Cure& value)
{
	this->type = value.type;
	return (*this);
}

Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " + target.getName() + "’s wounds *\n";
}
