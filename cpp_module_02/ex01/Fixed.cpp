/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:06:07 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/03 19:08:43 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->fixedPoint = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called\n";
	this->fixedPoint = value;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called\n";
	this->fixedPoint = (float)value * (1 << Fixed::fractionalBits);
}

Fixed::Fixed(Fixed& value)
{
	*this = value;
}

Fixed& Fixed::operator=(Fixed& value)
{
	std::cout << "Copy assignment operator called\n";
	this->fixedPoint = value.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called\n";
	return (this->fixedPoint);
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called\n";
	this->fixedPoint = raw;
}

int Fixed::toInt() const
{
	return (this->fixedPoint >> Fixed::fractionalBits);
}

float Fixed::toFloat() const
{
	return ((float)this->fixedPoint / (1 << Fixed::fractionalBits));
}

std::ostream& operator<<(std::ostream& out, Fixed const& value)
{
	out << value.toFloat();
	return (out);
}
