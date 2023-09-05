/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:17:39 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/09/02 17:57:47 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

const char* BitcoinExchangeLowerBoundException::what() const throw()
{
	return ("Error: Input date is too low.\n");
}

void readDatabase(std::map<std::string, std::string>& map)
{
	std::fstream	fstream;
	std::string		buffer;

	openFile("data.csv", &fstream); // open database file
	if (!fstream.is_open())
		return ;
	if (!getline(fstream, buffer) || buffer != "date,exchange_rate")
	{
		std::cout << "Error: data.csv: empty or unsupported file\n";
		fstream.close();
		return ;
	}
	while (getline(fstream, buffer))
	{
		{
			std::stringstream	ssBuffer(buffer);
			std::string			values[2];

			getline(ssBuffer, values[0], ',');
			getline(ssBuffer, values[1]);
			map[values[0]] = values[1];
		}
	}
	fstream.close();
}

static float	getExchangeBitcoinAmount(std::map<std::string, std::string> map, \
		const std::string& date, const std::string& value)
{
	for (std::map<std::string, std::string>::iterator it = map.begin(); it != map.end(); ++it)
	{
		if (it->first == date)
			return (convert<float>(value) * convert<float>(it->second));
		else if (it->first > date)
		{
			if (it != map.begin())
				--it;
			else
				throw (BitcoinExchangeLowerBoundException());
			return (convert<float>(value) * convert<float>(it->second));
		}
	}
	return (0);
}

static void	checkConversionRate(const std::map<std::string, std::string>& map, \
		const std::string& buffer)
{
	std::stringstream	ssBuffer(buffer);
	std::string			sValues[2];// Date and Value, respectively
	float				fValue;

	// get date
	getline(ssBuffer, sValues[0], '|');
	while (sValues[0][sValues[0].size() - 1] == ' ')
		sValues[0].erase(sValues[0].end() - 1);
	// get value
	getline(ssBuffer, sValues[1]);
	while (sValues[1][0] == ' ')
		sValues[1].erase(0, 1);
	if (sValues[1].empty())
	{
		std::cerr << "Error: bad input => " << buffer << std::endl;
		return ;
	}
	fValue = convert<float>(sValues[1]);
	// check sValues
	if (isValidDateFormat(sValues[0]) && isValidValue(fValue))
	{
		try
		{
			std::cout << sValues[0] << " => " << fValue << " = " << \
                getExchangeBitcoinAmount(map, sValues[0], sValues[1]) \
 << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what();
			std::cerr << "Error: bad input => " << sValues[0] << std::endl;
		}
	}
};

void	exchangeBitcoin(const std::map<std::string, std::string>& map, \
		const std::string& file)
{
	std::fstream	fstream;
	std::string		buffer;

	openFile(file, &fstream); // open input file
	if (!fstream.is_open())
		return ;
	if (!getline(fstream, buffer) || buffer != "date | value")
	{
		std::cout << "Error: " << file << ": empty or unsupported file\n";
		fstream.close();
		return ;
	}
	while (getline(fstream, buffer))
		checkConversionRate(map, buffer);
	fstream.close();
}
