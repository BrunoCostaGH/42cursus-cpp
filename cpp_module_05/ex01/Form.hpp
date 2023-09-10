/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:36:09 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/09/10 16:28:37 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	const std::string name;
	const int reqGradeSign;
	const int reqGradeExec;
	bool isSigned;

public:
	Form();
	Form(const std::string& name, int reqGradeSign, int reqGradeExec);
	Form(const Form&);
	Form& operator=(const Form&);
	~Form();

	std::string getName() const;
	int getReqGradeSign() const;
	int getReqGradeExec() const;
	bool getIsSigned() const;

	void beSigned(const Bureaucrat& bureaucrat);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream&, const Form&);
