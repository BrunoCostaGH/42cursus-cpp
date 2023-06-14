/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:28:11 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/06/13 16:45:11 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

/*
 * argv[1] = filename
 * argv[2] = s1
 * argv[3] = s2
 * Goal: It will open the file <filename> and copies its content into a new file
 *		<filename>.replace, replacing every occurrence of s1 with s2.
 */
int	main(int argc, char **argv)
{
	std::size_t		stPos;
	std::string		sBuffer;
	std::string		sOutput;
	std::fstream	fsInput;
	std::fstream	fsOutput;

	if (argc == 4)
	{
		fsInput.open(argv[1], std::ios::in);
		if (!fsInput)
		{
			std::cerr << "Could not open file: " << argv[1] << std::endl;
			return (1);
		}
		sOutput = argv[1];
		sOutput += ".replace";
		fsOutput.open(sOutput.c_str(), std::ios::out);
		if (!fsOutput)
		{
			std::cerr << "Could not create replacement file: " << argv[1]
					  << ".replace" << std::endl;
			return (1);
		}
		while (std::getline(fsInput, sBuffer))
		{
			stPos = sBuffer.find(argv[2], 0);
			if (stPos != std::string::npos)
			{
				sBuffer.erase(stPos, strlen(argv[2]));
				sBuffer.insert(stPos, argv[3]);
			}
			fsOutput << sBuffer << std::endl;
		}
	}
	else
		std::cout << "Usage: ./sed <filename> <string1> <string2>\n";
	return (0);
}
