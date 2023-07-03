/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:06:15 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/03 17:05:34 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	int fixedPoint;
	static const int fractionalBits = 8;

public:
	/* Orthodox Canonical Form */
	Fixed();						// Constructor
	Fixed(Fixed& value);			// Copy Constructor
	Fixed& operator=(Fixed& value);	// Copy Assignment Operator Overload
	~Fixed();						// Destructor
	/* -- */
	int getRawBits(void);
	void setRawBits(int const raw);
};
