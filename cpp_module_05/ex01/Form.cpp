/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:36:17 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/15 18:19:52 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : reqGradeSign(1), reqGradeExec(1), isSigned(false)
{}

Form::Form(const Form &value) : name(value.name), reqGradeSign(value.reqGradeSign), \
								reqGradeExec(value.reqGradeExec), isSigned(value.isSigned)
{}

Form &Form::operator=(const Form &value)
{
	const_cast<std::string &>(this->name) = value.name;
	const_cast<int &>(this->reqGradeSign) = value.reqGradeSign;
	const_cast<int &>(this->reqGradeExec) = value.reqGradeExec;
	this->isSigned = value.isSigned;
}

Form::~Form()
{}

std::string Form::getName() const
{
	return (this->name);
}

int Form::getReqGradeSign() const
{
	return (this->reqGradeSign);
}

int Form::getReqGradeExec() const
{
	return (this->reqGradeExec);
}

bool Form::getIsSigned() const
{
	return (this->isSigned);
}

void	Form::beSigned(const Bureaucrat &value)
{
	if (value.getGrade() > this->getReqGradeSign())
		throw (Form::GradeTooLowException());
	this->isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

std::ostream &operator<<(std::ostream &os, const Form &Form)
{
	os << Form.getName() << ", form required grade to sign " << Form.getReqGradeSign() \
	<< ", form required grade to execute " << Form.getReqGradeExec() \
	<< ", is for signed " << Form.getIsSigned() << std::endl;
	return (os);
}
