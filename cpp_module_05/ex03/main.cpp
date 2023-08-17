/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:26:05 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/17 18:29:02 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void)
{
	try
	{
		std::cout << "Object initialization\n";
		Intern	intern;
		AForm	*form;
		{
			std::cout << std::endl;
			std::cout << "Creating Presidential Pardon Form\n";
			std::cout << std::endl;
			form = intern.makeForm("presidential pardon", "George");
			std::cout << *form;
			delete form;
		}
		{
			std::cout << std::endl;
			std::cout << "Creating Robotomy Request Form\n";
			std::cout << std::endl;
			form = intern.makeForm("robotomy request", "George");
			std::cout << *form;
			delete form;
		}
		{
			std::cout << std::endl;
			std::cout << "Creating Shrubbery Creation Form\n";
			std::cout << std::endl;
			form = intern.makeForm("shrubbery creation", "George");
			std::cout << *form;
			delete form;
		}
		{
			std::cout << std::endl;
			std::cout << "Creating Unknown Form\n";
			std::cout << std::endl;
			form = intern.makeForm("unknown", "George");
			if (form)
				std::cout << *form;
			delete form;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
	return (0);
}
