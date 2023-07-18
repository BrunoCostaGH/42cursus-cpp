/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:20:37 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/18 20:54:42 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "`ScavTrap' Default constructor called\n";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string& name)
{
	std::cout << "`ScavTrap' Parameterized constructor called\n";
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}
ScavTrap::ScavTrap(ScavTrap &value) : ClapTrap(value)
{
	std::cout << "`ScavTrap' Copy constructor called\n";
	*this = value;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &value)
{
	std::cout << "`ScavTrap' Copy assignment operator called\n";
	this->name = value.name;
	this->hitPoints = value.hitPoints;
	this->energyPoints = value.energyPoints;
	this->attackDamage = value.attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "`ScavTrap' Destructor called\n";
}


void ScavTrap::attack(const std::string &target)
{
	if (!this->energyPoints)
	{
		std::cout << "`ScavTrap' ClapTrap " + this->name + " tried to attack " + target + \
		", but did not have energy points!\n";
		return;
	}
	else if (!this->hitPoints)
	{
		std::cout << "`ScavTrap' ClapTrap " + this->name + " tried to attack " + target + \
		", but does not have hit points!\n";
		return;
	}
	this->energyPoints--;
	std::cout << "`ScavTrap' ClapTrap " + this->name + " attacks " + target + \
		", causing " << this->attackDamage << " points of damage!\n";
}

void ScavTrap::guardGate(void)
{
	std::cout << "ClapTrap " + this->name + " is now in Gate keeper mode!\n";
}
