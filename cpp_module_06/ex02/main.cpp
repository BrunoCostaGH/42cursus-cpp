/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:59:50 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/28 17:33:33 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

/*
 * It randomly instantiates A, B or C and returns the instance as a Base pointer.
 * Feel free to use anything you like for the random choice implementation.
 */
Base * generate(void)
{
	srand(time(0));
	char	type = "ABC"[rand() % 3];

	switch (type)
	{
		case 'A':
			return (new A);
		case 'B':
			return (new B);
		case 'C':
			return (new C);
		default:
			return (0);
	}
}

/*
 * It prints the actual type of the object pointed to by p: "A", "B" or "C".
 */
void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

/*
 * It prints the actual type of the object pointed to by p: "A", "B" or "C".
 * Using a pointer inside this function is forbidden.
 */
void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception& exception)
	{}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::exception& exception)
	{}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::exception& exception)
	{}
}

int	main(void)
{
	Base *base = generate();

	identify(base);
	identify(*base);

	delete base;
	return (0);
}
