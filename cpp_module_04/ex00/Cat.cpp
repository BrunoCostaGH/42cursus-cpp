/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:47:51 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/21 17:43:56 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor called\n";
	this->type = "Cat";
}

Cat::Cat(const Cat& value) : Animal(value)
{
	std::cout << "Cat copy constructor called\n";
	*this = value;
	this->type = value.type;
}

Cat& Cat::operator=(const Cat& value)
{
	std::cout << "Cat copy assignment operator called\n";
	this->type = value.type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called\n";
}

void Cat::makeSound(void) const
{
	std::cout << "Meow\n";
}
