/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:46:22 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/21 18:35:30 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(const std::string& type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria& value)
{
	*this = value;
	this->type = value.type;
}

AMateria& AMateria::operator=(const AMateria& value)
{
	this->type = value.type;
	return (*this);
}

AMateria::~AMateria()
{
}

const std::string& AMateria::getType(void) const
{
	return (this->type);
}

void AMateria::use(ICharacter&)
{
}
