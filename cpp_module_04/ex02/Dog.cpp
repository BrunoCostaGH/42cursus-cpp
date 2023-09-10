/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:47:37 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/21 18:09:06 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor called\n";
	this->brain = new Brain();
	this->type = "Dog";
}

Dog::Dog(const Dog& value) : AAnimal(value)
{
	std::cout << "Dog copy constructor called\n";
	*this = value;
	this->brain = new Brain(*value.brain);
	this->type = value.type;
}

Dog& Dog::operator=(const Dog& value)
{
	std::cout << "Dog copy assignment operator called\n";
	this->brain = new Brain(*value.brain);
	this->type = value.type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called\n";
	delete this->brain;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof\n";
}
