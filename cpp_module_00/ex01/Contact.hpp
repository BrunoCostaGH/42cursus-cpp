/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:17:38 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/06/08 20:24:42 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "main.h"

class Contact
{
	std::string phoneNumber;
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string darkestSecret;

public:
	// getters
	std::string getPhoneNumber();
	std::string getFirstName();
	std::string getLastName();
	std::string getNickname();
	std::string getDarkestSecret();
	// setters
	void setPhoneNumber(const std::string& value);
	void setFirstName(const std::string& value);
	void setLastName(const std::string& value);
	void setNickname(const std::string& value);
	void setDarkestSecret(const std::string& value);
};

#endif /* CONTACT_HPP */
