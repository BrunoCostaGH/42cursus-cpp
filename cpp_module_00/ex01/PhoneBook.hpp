/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:11:03 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/06/08 20:20:05 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "main.h"

class PhoneBook
{
	int		index;
	int		len;
	Contact contacts[8];

	public:
		PhoneBook(); // constructor
		// getters
		int length() const;
		int getIndex() const;
		Contact getContact(int i);
		// setters
		void incrementIndex();
		void incrementLength();
		void addContact();
};

#endif //PHONEBOOK_HPP
