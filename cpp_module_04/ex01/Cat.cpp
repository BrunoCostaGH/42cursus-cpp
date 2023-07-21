/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:47:51 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/21 17:52:52 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor called\n";
	this->brain = new Brain();
	this->type = "Cat";
}

Cat::Cat(Cat &value) : Animal(value)
{
	std::cout << "Cat copy constructor called\n";
	*this = value;
	this->brain = new Brain(*value.brain);
	this->type = value.type;
}

Cat &Cat::operator=(const Cat &value)
{
	std::cout << "Cat copy assignment operator called\n";
	this->brain = new Brain(*value.brain);
	this->type = value.type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called\n";
	delete this->brain;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow\n";
}
