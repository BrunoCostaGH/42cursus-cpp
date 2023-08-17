/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:26:21 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/16 15:48:33 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	const std::string	name;
	int					grade;
	static const int	maxGrade = 1;
	static const int	minGrade = 150;

public:
	Bureaucrat();
	Bureaucrat(const std::string&, int);
	Bureaucrat(const Bureaucrat&);
	Bureaucrat& operator=(const Bureaucrat&);
	~Bureaucrat();

	std::string	getName(void) const;
	int			getGrade(void) const;

	void		incrementGrade(void);
	void		decrementGrade(void);

	void		signForm(Form&) const;

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

std::ostream &operator<<(std::ostream &, const Bureaucrat &);