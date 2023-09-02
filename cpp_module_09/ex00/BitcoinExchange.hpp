/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:22:54 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/09/02 15:45:52 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <fstream>
# include <sstream>
# include <limits>
# include <map>

template <typename T>
T convert(const std::string& value)
{
	T					res;
	std::stringstream	ss(value);

	ss >> res;
	return (res);
}

template <typename T>
bool isValidValue(T& value)
{
	if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
		return (false);
	if (value < 0)
	{
		std::cerr << "Error: not a positive number.\n";
		return (false);
	}
	if (value > 1000)
	{
		std::cerr << "Error: too large a number.\n";
		return (false);
	}
	return (true);
}

class BitcoinExchangeLowerBoundException : public std::exception
{
public:
	virtual const char *what() const throw();
};

void	openFile(const std::string& file, std::fstream* dst);
void	readDatabase(std::map<std::string, std::string>& map);
void	exchangeBitcoin(const std::map<std::string, std::string>& map, const std::string& file);

bool	isValidDateFormat(const std::string& date);
