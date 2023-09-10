/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:54:25 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/26 17:19:39 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "MutantStack.tpp"

template<typename T>
static void printContainer(typename T::iterator begin, typename T::iterator end)
{
	for (typename T::iterator it = begin; it != end; ++it)
	{
		std::cout << " " << *it;
	}
	std::cout << std::endl;
}

int main()
{
	MutantStack<int> mutantStack;

	mutantStack.push(4);
	mutantStack.push(3);
	mutantStack.push(2);
	mutantStack.push(1);
	mutantStack.push(0);

	std::cout << "mutantStack contains:";
	printContainer<MutantStack<int> >(mutantStack.begin(), mutantStack.end());
	return 0;
}
