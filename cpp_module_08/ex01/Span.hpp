/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:00:35 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/25 15:00:46 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <iostream>

class Span
{
	std::vector<int> container;
	const unsigned int maxLength;

public:
	Span(void);
	Span(unsigned int length);
	Span(const Span&);
	Span& operator=(const Span&);
	~Span(void);

	void addNumbers(std::vector<int>::iterator first,
					std::vector<int>::iterator last);

	void addNumber(int value);
	int shortestSpan(void);
	int longestSpan(void);

	class TooManyElementsException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	class TooFewElementsException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};
