/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:06:15 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/04 18:11:46 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	int fixedPoint;
	static const int fractionalBits = 8;

public:
	Fixed();								// Constructor
	Fixed(const int value);					// Parameterized Constructor
	Fixed(const float value);				// Parameterized Constructor
	Fixed(const Fixed& value);				// Copy Constructor
	Fixed& operator = (const Fixed& value);	// Copy Assignment Operator Overload
	~Fixed();								// Destructor

	int	getRawBits(void) const;
	void setRawBits(int const raw);

	int toInt(void) const;
	float toFloat(void) const;

	static Fixed& min(Fixed& fp1, Fixed& fp2);
	static Fixed& min(const Fixed& fp1, const Fixed& fp2);
	static Fixed& max(Fixed& fp1, Fixed& fp2);
	static Fixed& max(const Fixed& fp1, const Fixed& fp2);

	bool operator>(const Fixed& value) const;	// Operator Overload
	bool operator<(const Fixed& value) const;	// Operator Overload
	bool operator>=(const Fixed& value) const;	// Operator Overload
	bool operator<=(const Fixed& value) const;	// Operator Overload
	bool operator==(const Fixed& value) const;	// Operator Overload
	bool operator!=(const Fixed& value) const;	// Operator Overload
	Fixed operator+(const Fixed& value) const;	// Operator Overload
	Fixed operator-(const Fixed& value) const;	// Operator Overload
	Fixed operator*(const Fixed& value) const;	// Operator Overload
	Fixed operator/(const Fixed& value) const;	// Operator Overload
	Fixed operator++(void);						// Operator Overload
	Fixed operator++(int);						// Operator Overload
	Fixed operator--(void);						// Operator Overload
	Fixed operator--(int);						// Operator Overload
};
std::ostream& operator<<(std::ostream& out, Fixed const& value);
