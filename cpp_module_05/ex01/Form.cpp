/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:36:17 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/16 15:52:35 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
	: reqGradeSign(1), reqGradeExec(1), isSigned(false)
{
}

Form::Form(const std::string& name, int reqGradeSign, int reqGradeExec)
	: reqGradeSign(reqGradeSign), reqGradeExec(reqGradeExec)
{
	if (this->reqGradeSign < 1 || this->reqGradeExec < 1)
		throw (Form::GradeTooHighException());
	else if (this->reqGradeSign > 150 || this->reqGradeExec > 150)
		throw (Form::GradeTooLowException());

	const_cast<std::string&>(this->name) = name;
	const_cast<int&>(this->reqGradeSign) = reqGradeSign;
	const_cast<int&>(this->reqGradeExec) = reqGradeExec;
	this->isSigned = false;
}

Form::Form(const Form& value)
	: name(value.name), reqGradeSign(value.reqGradeSign),
	  reqGradeExec(value.reqGradeExec), isSigned(value.isSigned)
{
}

Form& Form::operator=(const Form& value)
{
	const_cast<std::string&>(this->name) = value.name;
	const_cast<int&>(this->reqGradeSign) = value.reqGradeSign;
	const_cast<int&>(this->reqGradeExec) = value.reqGradeExec;
	this->isSigned = value.isSigned;
	return (*this);
}

Form::~Form()
{
}

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

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->getReqGradeSign())
		throw (Form::GradeTooLowException());
	this->isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!\n");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!\n");
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
	const std::string name = form.getName();
	bool isSigned = form.getIsSigned();

	os << name << std::endl;
	os << std::string(name.length(), '-') << std::endl;
	os << "Grade to sign: " << form.getReqGradeSign() << std::endl;
	os << "Grade to execute: " << form.getReqGradeExec() << std::endl;
	if (isSigned)
		os << "Signed: True" << std::endl;
	else
		os << "Signed: False" << std::endl;
	return (os);
}
