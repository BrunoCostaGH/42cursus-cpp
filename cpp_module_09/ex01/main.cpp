/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:51:33 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/09/05 13:52:49 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static int	fillStack(std::stack<int>& stack, std::string& argv)
{
	for (std::string::iterator it = argv.end(); it >= argv.begin(); --it)
	{
		if (*it && strchr("0123456789", *it))
			stack.push(*it - '0');
		else if (*it && strchr("+-/*", *it))
				stack.push(*it);
		else if (*it && *it != ' ')
		{
			std::cout << "Error!\n";
			return (1);
		}
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout
				<< "Usage:\n\t/RPN \"<reverse_polish_notation_expression>\"\n";
		return (1);
	}
	std::string		expression = argv[1];
	std::stack<int>	stack;

	if (fillStack(stack, expression))
		return (1);
	try
	{
		std::cout << calculate(stack) << std::endl;
	}
	catch (std::exception& e)
	{
		std:: cout << e.what();
		return (1);
	}
	return (0);
}
