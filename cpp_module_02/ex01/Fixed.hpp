/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:06:15 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/03 19:05:25 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	int fixedPoint;
	static const int fractionalBits = 8;

public:
	Fixed();						// Constructor
	Fixed(const int value);			// Parameterized Constructor
	Fixed(const float value);		// Parameterized Constructor
	Fixed(Fixed& value);		// Copy Constructor
	Fixed& operator=(Fixed& value);	// Copy Assignment Operator Overload
	~Fixed();						// Destructor
	void setRawBits(int const raw);
	int getRawBits(void);
	int toInt(void) const;
	float toFloat(void) const;
};
std::ostream& operator<<(std::ostream& out, Fixed const& value);
