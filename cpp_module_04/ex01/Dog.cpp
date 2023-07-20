/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:47:37 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/20 17:47:55 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor called\n";
	this->brain = new Brain(void);
	this->type = "Dog";
}

Dog::Dog(Dog &value) : AAnimal(value)
{
	std::cout << "Dog copy constructor called\n";
	*this = value;
	this->brain = new Brain(void);
	this->type = "Dog";
}

Dog &Dog::operator=(const Dog &value)
{
	std::cout << "Dog copy assignment operator called\n";
	this->brain = value.brain;
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
