/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:17:35 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/06/08 20:50:39 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

std::string Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}

std::string Contact::getFirstName()
{
	return (this->firstName);
}

std::string Contact::getLastName()
{
	return (this->lastName);
}

std::string Contact::getNickname()
{
	return (this->nickname);
}

std::string Contact::getDarkestSecret()
{
	return (this->darkestSecret);
}

void Contact::setPhoneNumber(const std::string &value)
{
	this->phoneNumber = value;
}

	void Contact::setFirstName(const std::string &value)
{
	this->firstName = value;
}

void Contact::setLastName(const std::string &value)
{
	this->lastName = value;
}

void Contact::setNickname(const std::string &value)
{
	this->nickname = value;
}

void Contact::setDarkestSecret(const std::string &value)
{
	this->darkestSecret = value;
}
