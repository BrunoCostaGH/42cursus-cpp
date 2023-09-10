/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:26:05 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/16 16:02:45 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	{
		std::cout << "All valid tests\n";
		try
		{
			std::cout << "Object initialization\n";
			std::cout << std::endl;
			Bureaucrat bureaucrat("all_valid", 1);
			std::cout << bureaucrat;
			Form form("a simple form", 1, 1);
			std::cout << form;
			std::cout << std::endl;
			bureaucrat.signForm(form);
			std::cout << form;
		}
		catch (std::exception& e)
		{
			std::cout << e.what();
		}
	}
	{
		std::cout << std::endl;
		std::cout << "Not valid grade on object initialization\n";
		try
		{
			std::cout << "Object initialization\n";
			Form form("a simple form", 0, 151);
			std::cout << form;
		}
		catch (std::exception& e)
		{
			std::cout << e.what();
		}
	}
	{
		std::cout << std::endl;
		std::cout << "Not enough grade to sign\n";
		try
		{
			std::cout << "Object initialization\n";
			std::cout << std::endl;
			Bureaucrat bureaucrat("all_valid", 5);
			std::cout << bureaucrat;
			Form form("a simple form", 1, 1);
			std::cout << form;
			std::cout << std::endl;
			bureaucrat.signForm(form);
			std::cout << form;
		}
		catch (std::exception& e)
		{
			std::cout << e.what();
		}
	}
	return (0);
}
