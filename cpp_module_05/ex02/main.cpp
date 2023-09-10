/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:26:05 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/17 16:21:42 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void testShrubberyCreationForm()
{
	std::cout << "\n\n testShrubberyCreationForm() \n\n";
	{
		std::cout << "All valid tests\n";
		try
		{
			std::cout << "Object initialization\n";
			std::cout << std::endl;
			Bureaucrat bureaucrat("all_valid", 1);
			std::cout << bureaucrat;
			ShrubberyCreationForm form("George");
			std::cout << form;
			std::cout << std::endl;
			bureaucrat.signForm(form);
			std::cout << form;
			bureaucrat.executeForm(form);
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
			Bureaucrat bureaucrat("all_valid", 146);
			std::cout << bureaucrat;
			ShrubberyCreationForm form("George");
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
		std::cout << "Not enough grade to execute\n";
		try
		{
			std::cout << "Object initialization\n";
			std::cout << std::endl;
			Bureaucrat bureaucrat("all_valid", 138);
			std::cout << bureaucrat;
			ShrubberyCreationForm form("George");
			std::cout << form;
			std::cout << std::endl;
			bureaucrat.executeForm(form);
			std::cout << form;
		}
		catch (std::exception& e)
		{
			std::cout << e.what();
		}
	}
}

void testRobotomyRequestForm()
{
	std::cout << "\n\n testRobotomyRequestForm() \n\n";
	{
		std::cout << "All valid tests\n";
		try
		{
			std::cout << "Object initialization\n";
			std::cout << std::endl;
			Bureaucrat bureaucrat("all_valid", 1);
			std::cout << bureaucrat;
			RobotomyRequestForm form("George");
			std::cout << form;
			std::cout << std::endl;
			bureaucrat.signForm(form);
			std::cout << form;
			bureaucrat.executeForm(form);
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
			Bureaucrat bureaucrat("all_valid", 73);
			std::cout << bureaucrat;
			RobotomyRequestForm form("George");
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
		std::cout << "Not enough grade to execute\n";
		try
		{
			std::cout << "Object initialization\n";
			std::cout << std::endl;
			Bureaucrat bureaucrat("all_valid", 46);
			std::cout << bureaucrat;
			RobotomyRequestForm form("George");
			std::cout << form;
			std::cout << std::endl;
			bureaucrat.executeForm(form);
			std::cout << form;
		}
		catch (std::exception& e)
		{
			std::cout << e.what();
		}
	}
}

void testPresidentialPardonForm()
{
	std::cout << "\n\n testPresidentialPardonForm() \n\n";
	{
		std::cout << "All valid tests\n";
		try
		{
			std::cout << "Object initialization\n";
			std::cout << std::endl;
			Bureaucrat bureaucrat("all_valid", 1);
			std::cout << bureaucrat;
			PresidentialPardonForm form("George");
			std::cout << form;
			std::cout << std::endl;
			bureaucrat.signForm(form);
			std::cout << form;
			bureaucrat.executeForm(form);
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
			Bureaucrat bureaucrat("all_valid", 26);
			std::cout << bureaucrat;
			PresidentialPardonForm form("George");
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
		std::cout << "Not enough grade to execute\n";
		try
		{
			std::cout << "Object initialization\n";
			std::cout << std::endl;
			Bureaucrat bureaucrat("all_valid", 6);
			std::cout << bureaucrat;
			PresidentialPardonForm form("George");
			std::cout << form;
			std::cout << std::endl;
			bureaucrat.executeForm(form);
			std::cout << form;
		}
		catch (std::exception& e)
		{
			std::cout << e.what();
		}
	}
}

int main(void)
{
	testPresidentialPardonForm();
	testRobotomyRequestForm();
	testShrubberyCreationForm();
	return (0);
}
