/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:36:00 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/23 16:21:19 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<class T>
class Array
{
	T*				elems;
	unsigned int	arrSize;

public:
	Array();
	Array(unsigned int n);
	Array(const Array&);
	Array& operator=(const Array&);
	~Array();

	unsigned int size() const;
	T& operator[](unsigned int n);

	class OutOfBoundsException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};
