/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:47:06 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/21 18:23:54 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const AAnimal* animals[10];

	// init dogs
	for (int i = 0; i < 5; ++i)
	{
		animals[i] = new Dog();
	}
	// init cats
	for (int i = 5; i < 10; ++i)
	{
		animals[i] = new Cat();
	}
	// print types and free from heap
	for (int i = 0; i < 10; ++i)
	{
		std::cout << animals[i]->getType() << " " << std::endl;
		delete animals[i];
	}
	return 0;
}
