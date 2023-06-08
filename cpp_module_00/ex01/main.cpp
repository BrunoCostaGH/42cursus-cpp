/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:30:47 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/06/08 20:59:56 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main()
{
	int			i;
	std::string	prompt;
	PhoneBook	PhoneBook;

	i = 0;
	while (true)
	{
		std::cout << "Welcome to 'My Awesome PhoneBook'\n";
		std::cout << "When prompted, enter one of the following commands:\n\n";
		std::cout << "ADD: save a new contact\n";
		std::cout << "SEARCH: display a specific contact\n";
		std::cout << "EXIT: quits program\n\n>";
		std::cin >> prompt;
		if (prompt == "ADD") // add contact
		{
			if (i == 8)
				i = 0;
			i++;
		}
		else if (prompt == "SEARCH") // search specific contact
			;
		else if (prompt == "EXIT") // exit program
			break;
	}
	return (0);
}
