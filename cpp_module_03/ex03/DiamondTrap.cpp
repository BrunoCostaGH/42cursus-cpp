/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:58:14 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/21 19:08:49 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "`DiamondTrap' Default constructor called\n";
	this->FragTrap::hitPoints = 100;
	this->ScavTrap::energyPoints = 50;
	this->FragTrap::attackDamage = 30;
}

DiamondTrap::DiamondTrap(const std::string& value)
{
	std::cout << "`DiamondTrap' Parameterized constructor called\n";
	this->name = value;
	this->ClapTrap::name = name + "_clap_name";
	this->FragTrap::hitPoints = 100;
	this->ScavTrap::energyPoints = 50;
	this->FragTrap::attackDamage = 30;
}
DiamondTrap::DiamondTrap(DiamondTrap &value) : ClapTrap(value), ScavTrap(value), FragTrap(value)
{
	std::cout << "`DiamondTrap' Copy constructor called\n";
	*this = value;
	this->name = value.name;
	this->hitPoints = value.hitPoints;
	this->energyPoints = value.energyPoints;
	this->attackDamage = value.attackDamage;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &value)
{
	std::cout << "`DiamondTrap' Copy assignment operator called\n";
	this->name = value.name;
	this->hitPoints = value.hitPoints;
	this->energyPoints = value.energyPoints;
	this->attackDamage = value.attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "`DiamondTrap' Destructor called\n";
}

void DiamondTrap::whoAmI()
{
	std::cout << "hitPoints: " << this->hitPoints << std::endl;
	std::cout << "energyPoints: " << this->energyPoints << std::endl;
	std::cout << "attackDamage: " << this->attackDamage << std::endl;
	std::cout << "ClapTrap " + this->name + " has ClapTrap name " + ClapTrap::name << std::endl;
}
