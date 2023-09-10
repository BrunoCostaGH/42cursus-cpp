/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:25:19 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/17 18:32:24 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern&)
{
}

Intern& Intern::operator=(const Intern&)
{
	return (*this);
}

Intern::~Intern()
{
}

static AForm* presidentialPardonForm(const std::string& target)
{
	return (new PresidentialPardonForm(target));
}

static AForm* robotomyRequestForm(const std::string& target)
{
	return (new RobotomyRequestForm(target));
}

static AForm* shrubberyCreationForm(const std::string& target)
{
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::makeForm(const std::string& type,
						const std::string& target) const
{
	AForm* result;
	std::string fnMap[3] =
		{"presidential pardon", "robotomy request", "shrubbery creation"};
	fnPrototype fpMap[3] =
		{&presidentialPardonForm, &robotomyRequestForm, &shrubberyCreationForm};

	for (int i = 2; i >= 0; i--)
	{
		if (fnMap[i] == type)
		{
			result = (fpMap[i])(target);
			std::cout << "Intern creates " << result->getName() << std::endl;
			return (result);
		}
	}
	std::cout << "Intern couldn't find " << type << " form\n";
	return (0);
}
