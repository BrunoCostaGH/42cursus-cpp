/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:06:07 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/04 18:31:49 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	this->fixedPoint = 0;
}

Fixed::Fixed(const int value)
{
	this->fixedPoint = value * (1 << Fixed::fractionalBits);
}

Fixed::Fixed(const float value)
{
	this->fixedPoint = roundf(value * (1 << Fixed::fractionalBits));
}

Fixed::Fixed(Fixed const& value)
{
	*this = value;
}

Fixed& Fixed::operator=(const Fixed& value)
{
	this->setRawBits(value.getRawBits());
	return (*this);
}

Fixed::~Fixed()
{}

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

Fixed& Fixed::min(Fixed &fp1, Fixed &fp2)
{
	return (((fp1 > fp2) ? fp2 : fp1));
}

Fixed &Fixed::min(const Fixed &fp1, const Fixed &fp2)
{
	return (Fixed &)(((fp1 > fp2) ? fp2 : fp1));
}

Fixed &Fixed::max(Fixed &fp1, Fixed &fp2)
{
	return (((fp1 < fp2) ? fp2 : fp1));
}

Fixed &Fixed::max(const Fixed &fp1, const Fixed &fp2)
{
	return (Fixed &)(((fp1 < fp2) ? fp2 : fp1));
}

bool Fixed::operator>(const Fixed &value) const
{
	return ((this->getRawBits() > value.getRawBits()));
}

bool Fixed::operator<(const Fixed &value) const
{
	return ((this->getRawBits() < value.getRawBits()));
}

bool Fixed::operator>=(const Fixed &value) const
{
	return ((this->getRawBits() >= value.getRawBits()));
}

bool Fixed::operator<=(const Fixed &value) const
{
	return ((this->getRawBits() <= value.getRawBits()));
}

bool Fixed::operator==(const Fixed &value) const
{
	return ((this->getRawBits() == value.getRawBits()));
}

bool Fixed::operator!=(const Fixed &value) const
{
	return ((this->getRawBits() != value.getRawBits()));
}

Fixed Fixed::operator+(const Fixed &value) const
{
	Fixed	result(this->toFloat() + value.toFloat());

	return (result);
}

Fixed Fixed::operator-(const Fixed &value) const
{
	Fixed	result(this->toFloat() - value.toFloat());

	return (result);
}

Fixed Fixed::operator*(const Fixed &value) const
{
	Fixed	result(this->toFloat() * value.toFloat());

	return (result);
}

Fixed Fixed::operator/(const Fixed &value) const
{
	Fixed	result(this->toFloat() / value.toFloat());

	return (result);
}

Fixed Fixed::operator++(void)
{
	this->fixedPoint++;
	return (*this);
}


Fixed Fixed::operator++(int)
{
	Fixed result = *this;

	++(*this);
	return (result);
}

Fixed Fixed::operator--(void)
{
	this->fixedPoint--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed result = *this;

	--(*this);
	return (result);
}

std::ostream& operator<<(std::ostream& out, Fixed const& value)
{
	out << value.toFloat();
	return (out);
}
