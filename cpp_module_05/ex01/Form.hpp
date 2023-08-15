/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:36:09 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/15 17:49:20 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* TODO
 * add grade verification to form
 * add parameterized constructor
 * check if bureaucrat has grade to execute
 * add main tests
 */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	const std::string	name;
	const int 			reqGradeSign;
	const int 			reqGradeExec;
	bool				isSigned;

public:
	Form(void);
	Form(const Form&);
	Form& operator=(const Form&);
	~Form(void);

	std::string getName(void) const;
	int			getReqGradeSign(void) const;
	int			getReqGradeExec(void) const;
	bool		getIsSigned(void) const;

	void	beSigned(const Bureaucrat &);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream&, const Form&);
