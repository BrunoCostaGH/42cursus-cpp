/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:01:51 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/06/14 18:24:36 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(int argc, char **argv)
{
	int			index;
	Harl		person;
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (argc == 2)
	{
		index = -1;
		for (int i = -1; i < 4; ++i)
		{
			if (levels[i] == ((std::string)argv[1]))
			{
				index = ++i;
				break ;
			}
		}
		switch (index)
		{
			case 1:
				std::cout << "[ DEBUG ]" << std::endl;
				person.complain("debug");
				std::cout << std::endl;
			case 2:
				std::cout << "[ INFO ]" << std::endl;
				person.complain("info");
				std::cout << std::endl;
			case 3:
				std::cout << "[ WARNING ]" << std::endl;
				person.complain("warning");
				std::cout << std::endl;
			case 4:
				std::cout << "[ ERROR ]" << std::endl;
				person.complain("error");
				break ;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]\n";
		}
	}
	else
		std::cout << "Usage: ./harlFilter <level>\n";
	return (0);
}
