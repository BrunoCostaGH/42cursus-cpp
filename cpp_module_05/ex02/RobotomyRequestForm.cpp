/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:08:25 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/17 16:15:19 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <unistd.h>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
		: AForm("RobotomyRequestForm", 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
		: AForm("RobotomyRequestForm", 72, 45), target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &value)
		: AForm(value.getName(), value.getReqGradeSign(), value.getReqGradeExec()), \
			target(value.target)
{}

RobotomyRequestForm &\
	RobotomyRequestForm::operator=(const RobotomyRequestForm &value)
{
	const_cast<std::string &>(this->target) = value.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getReqGradeExec())
		throw (AForm::GradeTooLowException());
	else if (this->getIsSigned())
	{
		std::cout << "* making drilling noises *\n";
		usleep(5000);
		srand(time(0));
		if (rand() % 1 == 1)
			std::cout << this->target << " had been robotomized\n";
		else
			std::cout << this->target << "'s robotomy failed\n";
	}
}
