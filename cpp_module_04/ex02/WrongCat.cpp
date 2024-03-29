/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:00:14 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/21 18:09:40 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat default constructor called\n";
	this->type = "Wrong Cat";
}

WrongCat::WrongCat(const WrongCat& value) : WrongAnimal(value)
{
	std::cout << "WrongCat copy constructor called\n";
	*this = value;
	this->type = value.type;
}

WrongCat& WrongCat::operator=(const WrongCat& value)
{
	std::cout << "WrongCat copy assignment operator called\n";
	this->type = value.type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called\n";
}
