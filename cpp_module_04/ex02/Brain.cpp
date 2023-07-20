/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:30:30 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/20 19:32:28 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called\n";
}

Brain::Brain(Brain &value)
{
	std::cout << "Brain copy constructor called\n";
	*this = value;
	std::copy(value.ideas->begin(), value.ideas->end(), this->ideas->begin());
}

Brain& Brain::operator=(const Brain& value)
{
	std::cout << "Brain copy assignment operator called\n";
	std::copy(value.ideas->begin(void), value.ideas->end(void), this->ideas->begin(void));
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called\n";
}
