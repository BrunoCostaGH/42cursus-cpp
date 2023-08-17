/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:08:39 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/17 16:15:27 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
		: AForm("PresidentialPardonForm", 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
		: AForm("PresidentialPardonForm", 25, 5), target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &value)
		: AForm(value.getName(), value.getReqGradeSign(), value.getReqGradeExec()), \
			target(value.target)
{}

PresidentialPardonForm &\
	PresidentialPardonForm::operator=(const PresidentialPardonForm &value)
{
	const_cast<std::string &>(this->target) = value.target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getReqGradeExec())
		throw (AForm::GradeTooLowException());
	else if (this->getIsSigned())
		std::cout << this->target << " has been pardoned by Zaphod Beeblebrox.\n";
}
