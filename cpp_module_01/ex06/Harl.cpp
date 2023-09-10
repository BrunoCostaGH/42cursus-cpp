/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:02:06 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/06/14 16:39:19 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my "
			  << "7XL-double-cheese-triple-pickle-specialketchup burger. "
			  << "I really do!\n";
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
			  << "You didn’t put enough bacon in my burger! If you did, "
			  << "I wouldn’t be asking for more!\n";
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve "
			  << "been coming for years whereas you started working here since "
			  << "last month.\n";
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(const std::string& level)
{
	std::string fnMap[4] = {"debug", "info", "warning", "error"};
	fnPrototype
		fpMap[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 4; i >= 0; i--)
	{
		if (fnMap[i] == level)
			(this->*fpMap[i])();
	}
}
