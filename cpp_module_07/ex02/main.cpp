/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:41:11 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/23 16:49:52 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"
#include <iostream>

template<typename T>
void printObjects(Array<T>& arr, const std::string& name)
{
	for (unsigned int i = 0; i < arr.size(); i += 1)
	{
		std::cout << name << "[" << i << "] = " << arr[i] << "\n";
	}
}

int main(void)
{
	Array<int> a(3);
	Array<int> b(3);

	// Print a
	printObjects(a, "a");
	std::cout << std::endl;
	// Print b
	printObjects(b, "b");
	std::cout << std::endl;

	// Set elements from a to 1
	std::cout << "*** a[n] = 1 ***" << std::endl;
	std::cout << std::endl;
	a[0] = 1;
	a[1] = 1;
	a[2] = 1;
	std::cout << std::endl;
	// Print a
	printObjects(a, "a");
	std::cout << std::endl;
	// Print b
	printObjects(b, "b");
	std::cout << std::endl;

	std::cout << "*** b = a ***" << std::endl;
	b = a;
	std::cout << std::endl;
	// Print a
	printObjects(a, "a");
	std::cout << std::endl;
	// Print b
	printObjects(b, "b");
	std::cout << std::endl;

	// Empty array
	std::cout << "*** Initializing empty array ***" << std::endl;
	std::cout << std::endl;
	Array<int> empty;
	printObjects(empty, "empty");
	std::cout << std::endl;

	// Out of bounds exception
	std::cout << "*** std::cout << a[n + 1] << std::endl ***" << std::endl;
	std::cout << std::endl;
	try
	{
		std::cout << a[a.size() + 1] << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
