/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:36:09 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/17 18:26:29 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	const std::string	name;
	const int 			reqGradeSign;
	const int 			reqGradeExec;
	bool				isSigned;

public:
	AForm(void);
	AForm(std::string, int, int);
	AForm(const AForm&);
	AForm& operator=(const AForm&);
	virtual ~AForm(void);

	std::string getName(void) const;
	int			getReqGradeSign(void) const;
	int			getReqGradeExec(void) const;
	bool		getIsSigned(void) const;

	void	beSigned(const Bureaucrat&);
	virtual void	execute(Bureaucrat const & executor) const = 0;

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

std::ostream &operator<<(std::ostream&, const AForm&);
