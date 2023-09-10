/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:00:00 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/26 15:51:31 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include "Span.hpp"

int main()
{
	// Subject
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;
	// Too many values
	{
		try
		{
			Span sp = Span(2);

			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << "Caught exception: " << e.what();
		}
	}
	std::cout << std::endl;
	// Not enough values
	{
		try
		{
			Span sp = Span(1);

			sp.addNumber(6);

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << "Caught exception: " << e.what();
		}
	}
	std::cout << std::endl;
	// Add random numbers using range of iterators
	{
		try
		{
			Span sp = Span(10000);
			std::vector<int> v(10000);

			std::srand(std::time(0));
			std::generate(v.begin(), v.end(), std::rand);
			sp.addNumbers(v.begin(), v.end());

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << "Caught exception: " << e.what();
		}
	}
	return 0;
}
