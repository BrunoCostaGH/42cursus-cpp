/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:27:47 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/06/13 15:21:53 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string& stringREF = brain;

	{
		std::cout << "The memory address of the string variable: " << &brain << std::endl
				  << "The memory address held by stringPTR: " << &stringPTR << std::endl
				  << "The memory address held by stringREF: " << &stringREF << std::endl;
	}
	{
		std::cout << "The value of the string variable: " << brain << std::endl
				  << "The value held by stringPTR: " << stringPTR << std::endl
				  << "The value held by stringREF: " << stringREF << std::endl;
	}
}
