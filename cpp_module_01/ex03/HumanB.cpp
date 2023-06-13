/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:43:40 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/06/13 15:20:27 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{}

HumanB::HumanB(const std::string& sName)
{
	this->name = sName;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their "
			  << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& wValue)
{
	this->weapon = &wValue;
}
