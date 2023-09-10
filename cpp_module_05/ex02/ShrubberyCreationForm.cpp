/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:08:10 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/17 16:15:11 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm("ShrubberyCreationForm", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& value)
	: AForm(value.getName(), value.getReqGradeSign(), value.getReqGradeExec()),
	  target(value.target)
{
}

ShrubberyCreationForm& \
    ShrubberyCreationForm::operator=(const ShrubberyCreationForm& value)
{
	const_cast<std::string&>(this->target) = value.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (executor.getGrade() > this->getReqGradeExec())
		throw (AForm::GradeTooLowException());
	else if (this->getIsSigned())
	{
		std::string file = this->target + "_shrubbery";
		std::fstream fs;

		fs.open(file.c_str(), std::fstream::out | std::fstream::trunc);
		if (fs.is_open())
		{
			fs << "       _-_\n"
				  "    /~~   ~~\\\n"
				  " /~~         ~~\\\n"
				  "{               }\n"
				  " \\  _-     -_  /\n"
				  "   ~  \\\\ //  ~\n"
				  "_- -   | | _- _\n"
				  "  _ -  | |   -_\n"
				  "      // \\\\\n";
			fs.close();
		}
	}
}
