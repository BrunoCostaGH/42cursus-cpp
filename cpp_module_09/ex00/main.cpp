/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:43:30 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/09/02 17:58:22 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool isValidDateFormat(const std::string& date)
{
	int					iDateValues[3]; // [YYYY-MM-DD]
	bool				bIsValid = true;
	std::string			sBuffer[3];
	std::stringstream	ssBuffer(date);

	for (int i = 0; i < 3; i++)
	{
		getline(ssBuffer, sBuffer[i], '-');
		iDateValues[i] = convert<int>(sBuffer[i]);
	}
	// check valid year
	if (iDateValues[0] < 1000 || iDateValues[0] > 9999)
		bIsValid = false;
	// check valid month
	if (iDateValues[1] < 1 || iDateValues[1] > 12)
		bIsValid = false;
	// check valid day of month
	if (iDateValues[2] < 1 || iDateValues[2] > \
	28 + (iDateValues[1] + (iDateValues[1]/8) % 2 + 2 % iDateValues[1] + 2 * (1/iDateValues[1])))
		bIsValid = false;
	if (!bIsValid)
		std::cerr << "Error: bad input => " << date << std::endl;
	return (bIsValid);
}

void openFile(const std::string& file, std::fstream* fstream)
{
	if (fstream->is_open())
		fstream->close();
	fstream->open(file.c_str(), std::ios::in);
	if (!fstream->is_open())
	{
		fstream->clear();
		std::cerr << "Error: `" << file << "': Could not open file\n";
	}
}

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage:\n\t./btc <path_to_input_file>\n";
		return (1);
	}
	std::map<std::string, std::string>	map;

	readDatabase(map);
	exchangeBitcoin(map, argv[1]);
	return (0);
}
