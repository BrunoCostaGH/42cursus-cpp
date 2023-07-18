/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:47:17 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/18 20:52:21 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called\n";
	this->type = "Fox";
}

Animal::Animal(Animal &value)
{
	std::cout << "Animal copy constructor called\n";
	*this = value;
	this->type = "Fox";
}

Animal &Animal::operator=(const Animal &value)
{
	std::cout << "Animal copy assignment operator called\n";
	this->type = value.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called\n";
}

void Animal::makeSound() const
{
	std::cout << "What does the fox say?\n";
}

std::string Animal::getType() const
{
	return (this->type);
}
