/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:36:17 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/17 15:23:34 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm()
	: reqGradeSign(1), reqGradeExec(1), isSigned(false)
{
}

AForm::AForm(const std::string& name, int reqGradeSign, int reqGradeExec)
	: reqGradeSign(reqGradeSign), reqGradeExec(reqGradeExec)
{
	if (this->reqGradeSign < 1 || this->reqGradeExec < 1)
		throw (AForm::GradeTooHighException());
	else if (this->reqGradeSign > 150 || this->reqGradeExec > 150)
		throw (AForm::GradeTooLowException());

	const_cast<std::string&>(this->name) = name;
	const_cast<int&>(this->reqGradeSign) = reqGradeSign;
	const_cast<int&>(this->reqGradeExec) = reqGradeExec;
	this->isSigned = false;
}

AForm::AForm(const AForm& value)
	: name(value.name), reqGradeSign(value.reqGradeSign),
	  reqGradeExec(value.reqGradeExec), isSigned(value.isSigned)
{
}

AForm& AForm::operator=(const AForm& value)
{
	const_cast<std::string&>(this->name) = value.name;
	const_cast<int&>(this->reqGradeSign) = value.reqGradeSign;
	const_cast<int&>(this->reqGradeExec) = value.reqGradeExec;
	this->isSigned = value.isSigned;
	return (*this);
}

AForm::~AForm()
{
}

std::string AForm::getName() const
{
	return (this->name);
}

int AForm::getReqGradeSign() const
{
	return (this->reqGradeSign);
}

int AForm::getReqGradeExec() const
{
	return (this->reqGradeExec);
}

bool AForm::getIsSigned() const
{
	return (this->isSigned);
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->getReqGradeSign())
		throw (AForm::GradeTooLowException());
	this->isSigned = true;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high!\n");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low!\n");
}

std::ostream& operator<<(std::ostream& os, const AForm& form)
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
