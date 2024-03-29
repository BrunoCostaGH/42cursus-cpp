/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:02:04 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/21 17:53:43 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default constructor called\n";
	this->type = "Wrong Fox";
}

WrongAnimal::WrongAnimal(const WrongAnimal& value)
{
	std::cout << "WrongAnimal copy constructor called\n";
	*this = value;
	this->type = value.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& value)
{
	std::cout << "WrongAnimal copy assignment operator called\n";
	this->type = value.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called\n";
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "?yas xof eht seod thaW\n";
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

