/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:40:26 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/21 19:07:41 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "`FragTrap' Default constructor called\n";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const std::string& value)
{
	std::cout << "`FragTrap' Parameterized constructor called\n";
	this->name = value;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& value) : ClapTrap(value)
{
	std::cout << "`FragTrap' Copy constructor called\n";
	*this = value;
	this->name = value.name;
	this->hitPoints = value.hitPoints;
	this->energyPoints = value.energyPoints;
	this->attackDamage = value.attackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap& value)
{
	std::cout << "`FragTrap' Copy assignment operator called\n";
	this->name = value.name;
	this->hitPoints = value.hitPoints;
	this->energyPoints = value.energyPoints;
	this->attackDamage = value.attackDamage;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "`FragTrap' Destructor called\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "ClapTrap " + this->name + " requests a High Five!\n";
}
