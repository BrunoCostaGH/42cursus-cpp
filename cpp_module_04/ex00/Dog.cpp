/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:47:37 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/18 20:34:18 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called\n";
	this->type = "Dog";
}

Dog::Dog(Dog &value) : Animal(value)
{
	std::cout << "Dog copy constructor called\n";
	*this = value;
	this->type = "Dog";
}

Dog &Dog::operator=(const Dog &value)
{
	std::cout << "Dog copy assignment operator called\n";
	this->type = value.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
}

void Dog::makeSound() const
{
	std::cout << "Woof\n";
}
