/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:26:05 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/15 17:32:42 by bsilva-c         ###   ########.fr       */
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
			Bureaucrat bureaucrat("all_valid", 50);
			std::cout << bureaucrat;
			std::cout << "Increment grade\n";
			bureaucrat.incrementGrade();
			std::cout << bureaucrat;
			std::cout << "Decrement grade\n";
			bureaucrat.decrementGrade();
			std::cout << bureaucrat;
		}
		catch (std::exception &e)
		{
			std::cout << e.what();
		}
	}
	{
		std::cout << "\nNot valid grade on object initialization\n";
		try
		{
			std::cout << "Object initialization\n";
			Bureaucrat bureaucrat("not_valid_init", 0);
			std::cout << bureaucrat;
		}
		catch (std::exception &e)
		{
			std::cout << e.what();
		}
	}
	{
		std::cout << "\nNot valid grade increment\n";
		try
		{
			std::cout << "Object initialization\n";
			Bureaucrat bureaucrat("not_valid_increment", 1);
			std::cout << bureaucrat;
			std::cout << "Increment grade\n";
			bureaucrat.incrementGrade();
			std::cout << bureaucrat;
		}
		catch (std::exception &e)
		{
			std::cout << e.what();
		}
	}
	{
		std::cout << "\nNot valid grade decrement\n";
		try
		{
			std::cout << "Object initialization\n";
			Bureaucrat bureaucrat("not_valid_decrement", 150);
			std::cout << bureaucrat;
			std::cout << "Decrement grade\n";
			bureaucrat.decrementGrade();
			std::cout << bureaucrat;
		}
		catch (std::exception &e)
		{
			std::cout << e.what();
		}
	}
	return (0);
}
