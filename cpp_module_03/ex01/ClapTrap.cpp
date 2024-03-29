/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:21:43 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/21 19:00:14 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "`ClapTrap' Default constructor called\n";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ClapTrap::ClapTrap(const std::string& value)
{
	std::cout << "`ClapTrap' Parameterized constructor called\n";
	this->name = value;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ClapTrap::ClapTrap(const ClapTrap& value)
{
	std::cout << "`ClapTrap' Copy constructor called\n";
	this->name = value.name;
	this->hitPoints = value.hitPoints;
	this->energyPoints = value.energyPoints;
	this->attackDamage = value.attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& value)
{
	std::cout << "`ClapTrap' Copy assignment operator called\n";
	this->name = value.name;
	this->hitPoints = value.hitPoints;
	this->energyPoints = value.energyPoints;
	this->attackDamage = value.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "`ClapTrap' Destructor called\n";
}

void ClapTrap::attack(const std::string& target)
{
	if (!this->energyPoints)
	{
		std::cout << "`ClapTrap' ClapTrap " + this->name + " tried to attack " +
					 target + ", but did not have energy points!\n";
		return;
	}
	else if (!this->hitPoints)
	{
		std::cout << "`ClapTrap' ClapTrap " + this->name + " tried to attack " +
					 target + ", but does not have hit points!\n";
		return;
	}
	this->energyPoints--;
	std::cout << "`ClapTrap' ClapTrap " + this->name + " attacks " + target +
				 ", causing " << this->attackDamage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints)
		this->hitPoints -= (int)amount;
	std::cout << "ClapTrap " + this->name + " took " << amount
			  << " damage and is now with " << this->hitPoints
			  << " hit points\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints)
	{
		this->hitPoints += amount;
		this->energyPoints--;
		std::cout << "ClapTrap " + this->name + " repaired and has now "
				  << this->hitPoints << " hit points\n";
	}
}
