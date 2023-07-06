/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:06:07 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/05 14:11:29 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->fixedPoint = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called\n";
	this->fixedPoint = value * (1 << Fixed::fractionalBits);
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called\n";
	this->fixedPoint = roundf(value * (1 << Fixed::fractionalBits));
}

Fixed::Fixed(Fixed const& value)
{
	std::cout << "Copy constructor called\n";
	*this = value;
}

Fixed& Fixed::operator=(const Fixed& value)
{
	std::cout << "Copy assignment operator called\n";
	this->setRawBits(value.getRawBits());
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
	return (this->fixedPoint);
}

void Fixed::setRawBits(const int raw)
{
	this->fixedPoint = raw;
}

int Fixed::toInt() const
{
	return (this->fixedPoint >> Fixed::fractionalBits);
}

float Fixed::toFloat() const
{
	return ((float)this->fixedPoint / (float)(1 << Fixed::fractionalBits));
}

std::ostream& operator<<(std::ostream& out, Fixed const& value)
{
	out << value.toFloat();
	return (out);
}
