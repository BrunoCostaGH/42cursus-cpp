/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:06:15 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/06 15:25:40 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	int fixedPoint;
	static const int fractionalBits = 8;

public:
	Fixed();								// Constructor
	Fixed(const Fixed& value);				// Copy Constructor
	Fixed& operator=(const Fixed& value);	// Copy Assignment Operator Overload
	~Fixed();								// Destructor

	int getRawBits() const;
	void setRawBits(int const raw);
};

#endif /* FIXED_HPP */
