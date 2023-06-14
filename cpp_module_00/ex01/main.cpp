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

static std::string formatValue(const std::string& value)
{
	std::string	result;

	result = value;
	if (result.length() > 10)
		result[9] = '.';
	result.resize(10, ' ');
	return (result);
}

static void printTable(PhoneBook phoneBook)
{
	int			len;
	std::string value;

	//header
	std::cout << formatValue("index") << "|";
	std::cout << formatValue("first name") << "|";
	std::cout << formatValue("last name") << "|";
	std::cout << formatValue("nickname") << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	//body
	len = phoneBook.length();
	for (int i = 0; i < len; i++)
	{
		std::cout << i << "         " << "|";
		std::cout << formatValue(phoneBook.getContact(i).getFirstName()) << "|";
		std::cout << formatValue(phoneBook.getContact(i).getLastName()) << "|";
		std::cout << formatValue(phoneBook.getContact(i).getNickname()) << std::endl;
		std::cout << "-----------------------------------------" << std::endl;
	}
}

static void	selectContact(PhoneBook phoneBook)
{
	int 		i;
	std::string prompt;

	std::cout << "index> ";
	while (!std::cin.good() || prompt.length() == 0)
	{
		if (!std::cin.good())
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
		}
		std::getline(std::cin, prompt);
	}
	std::cout << std::endl;
	i = -1;
	if (prompt.length() && prompt.find_first_not_of("0123456789") == std::string::npos)
		i = atoi(prompt.c_str());
	if ((int)i >= 0 && i < phoneBook.length())
	{
		std::cout << "First Name: " << phoneBook.getContact(i).getFirstName() << std::endl;
		std::cout << "Last Name: " << phoneBook.getContact(i).getLastName() << std::endl;
		std::cout << "Nickname: " << phoneBook.getContact(i).getNickname() << std::endl;
		std::cout << "Phone Number: " << phoneBook.getContact(i).getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << phoneBook.getContact(i).getDarkestSecret() << std::endl;
	}
	else
		selectContact(phoneBook);
}

int	main()
{
	std::string	prompt;
	PhoneBook	phoneBook;

	while (true)
	{
		std::cout << std::endl;
		std::cout << "Welcome to 'My Awesome PhoneBook'\n";
		std::cout << "When prompted, enter one of the following commands:\n\n";
		std::cout << "ADD: save a new contact\n";
		std::cout << "SEARCH: display a specific contact\n";
		std::cout << "EXIT: quits program\n\n> ";
		if (!std::cin.good())
		{
			std::cin.clear();
			clearerr(stdin);
		}
		std::getline(std::cin, prompt);
		std::cout << std::endl;
		if (prompt == "ADD") // add contact
			phoneBook.addContact();
		else if (prompt == "SEARCH") // search specific contact
		{
			printTable(phoneBook);
			if (phoneBook.length())
				selectContact(phoneBook);
		}
		else if (prompt == "EXIT") // exit program
			break;
	}
	return (0);
}
