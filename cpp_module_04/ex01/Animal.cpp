/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:47:17 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/21 17:52:18 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor called\n";
	this->type = "Fox";
}

Animal::Animal(Animal &value)
{
	std::cout << "Animal copy constructor called\n";
	*this = value;
	this->type = value.type;
}

Animal &Animal::operator=(const Animal &value)
{
	std::cout << "Animal copy assignment operator called\n";
	this->type = value.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called\n";
}

void Animal::makeSound(void) const
{
	std::cout << "What does the fox say?\n";
}

std::string Animal::getType(void) const
{
	return (this->type);
}
