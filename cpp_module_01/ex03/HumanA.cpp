/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:43:32 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/06/13 15:20:36 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA()
{
}

HumanA::HumanA(const std::string& sName, Weapon& wValue)
{
	this->name = sName;
	this->weapon = &wValue;
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with their "
			  << this->weapon->getType() << std::endl;
}
