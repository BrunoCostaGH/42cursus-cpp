/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:47:17 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/21 17:58:59 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "AAnimal default constructor called\n";
	this->type = "Fox";
}

AAnimal::AAnimal(AAnimal &value)
{
	std::cout << "AAnimal copy constructor called\n";
	*this = value;
	this->type = value.type;
}

AAnimal &AAnimal::operator=(const AAnimal &value)
{
	std::cout << "AAnimal copy assignment operator called\n";
	this->type = value.type;
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called\n";
}

std::string AAnimal::getType(void) const
{
	return (this->type);
}
