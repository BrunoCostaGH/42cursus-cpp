/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:03:40 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/06/08 20:33:40 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits>
#include "main.h"

PhoneBook::PhoneBook()
{
	this->index = 0;
	this->len = 0;
}

int PhoneBook::length() const
{
	return (this->len);
}

int	PhoneBook::getIndex() const
{
	return (this->index);
}

Contact	PhoneBook::getContact(int i)
{
	return (this->contacts[i]);
}

void	PhoneBook::incrementIndex()
{
	this->index++;
	if (this->index == 8)
		this->index = 0;
}

void	PhoneBook::incrementLength()
{
	if (this->len < 8)
		this->len++;
}

static void	setPrompt(std::string *s_value, const std::string &field)
{
	while (!std::cin.good() || (*s_value).length() == 0)
	{
		if (!std::cin.good())
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
		}
		std::cout << field << ": ";
		std::getline(std::cin, (*s_value));
	}
	std::cout << std::endl;
}

void	PhoneBook::addContact()
{
	int 		i;
	std::string	s_value;

	i = this->getIndex();
	// First Name
	setPrompt(&s_value, "First Name");
	this->contacts[i].setFirstName(s_value);
	s_value.clear();
	// Last Name
	setPrompt(&s_value, "Last Name");
	this->contacts[i].setLastName(s_value);
	s_value.clear();
	// Nickname
	setPrompt(&s_value, "Nickname");
	this->contacts[i].setNickname(s_value);
	// Phone Number
	while (s_value.length() == 0 || s_value.find_first_not_of("0123456789") != std::string::npos)
	{
		s_value.clear();
		setPrompt(&s_value, "Phone Number");
	}
	this->contacts[i].setPhoneNumber(s_value);
	s_value.clear();
	// Darkest Secret
	setPrompt(&s_value, "Darkest Secret");
	this->contacts[i].setDarkestSecret(s_value);
	this->incrementIndex();
	this->incrementLength();
}
