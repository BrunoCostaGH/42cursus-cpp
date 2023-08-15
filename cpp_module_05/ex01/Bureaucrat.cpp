/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:26:13 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/15 18:00:34 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name)
{
	if (grade < maxGrade)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > minGrade)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &value) : name(value.name), grade(value.grade)
{}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &value)
{
	const_cast<std::string&>(this->name) = value.name;
	this->grade = value.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::incrementGrade()
{
	if (this->grade - 1 < maxGrade)
		throw (Bureaucrat::GradeTooHighException());
	else if (this->grade - 1 > minGrade)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (this->grade + 1 < maxGrade)
		throw (Bureaucrat::GradeTooHighException());
	else if (this->grade + 1 > minGrade)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->grade++;
}

void	Bureaucrat::signForm(const Form& form) const
{
	try
	{
		form.beSigned(this);
		std::cout << this->name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << this->name << " couldn’t sign " << form.getName() \
		<< " because " << e.what();
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!\n");
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &Bureaucrat)
{
	os << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << std::endl;
	return (os);
}
