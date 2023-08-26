/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:00:28 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/26 15:40:52 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span(void)
		: container(0), maxLength(0)
{}

Span::Span(unsigned int length)
		: container(0), maxLength(length)
{}

Span::Span(const Span &value)
		: maxLength(value.maxLength)
{
	std::copy(value.container.begin(), value.container.end(), this->container.begin());
}

Span& Span::operator=(const Span &value)
{
	std::copy(value.container.begin(), value.container.end(), this->container.begin());
	const_cast<unsigned int &>(this->maxLength) = value.maxLength;
	return (*this);
}

Span::~Span(void)
{}

void Span::addNumbers(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	for (std::vector<int>::iterator it = first; it != last; ++it)
	{
		this->addNumber(*it);
	}
}

void Span::addNumber(int value)
{
	if (this->container.size() == maxLength)
		throw (Span::TooManyElementsException());
	this->container.push_back(value);
}

static int getHighestNumber(std::vector<int>& container)
{
	int res = 0;

	for (std::vector<int>::iterator it = container.begin(); it != container.end(); it++)
	{
		if (*it > res)
			res = *it;
	}
	return (res);
}

static int getLowestNumber(std::vector<int>& container)
{
	int res = getHighestNumber(container);

	for (std::vector<int>::iterator it = container.begin(); it != container.end(); it++)
	{
		if (*it < res)
			res = *it;
	}
	return (res);
}

int Span::shortestSpan(void)
{
	if (this->container.size() <= 1)
		throw (Span::TooFewElementsException());

	int					span = longestSpan();
	std::vector<int>	tempContainer(this->maxLength);

	std::copy(this->container.begin(), this->container.end(), tempContainer.begin());
	std::sort(tempContainer.begin(), tempContainer.end());
	for (std::vector<int>::iterator it = tempContainer.begin(); it != tempContainer.end() ; ++it)
	{
		if ((it + 1 )!= tempContainer.end() && (*(it + 1) - *it) < span)
			span = *(it + 1) - *it;
	}
	return (span);
}

int Span::longestSpan(void)
{
	if (this->container.size() <= 1)
		throw (Span::TooFewElementsException());
	return (getHighestNumber(this->container) - getLowestNumber(this->container));
}

const char *Span::TooManyElementsException::what() const throw()
{
	return ("Container has reached max amount of elements!\n");
}

const char *Span::TooFewElementsException::what() const throw()
{
	return ("Container does not have enough elements to execute action!\n");
}
