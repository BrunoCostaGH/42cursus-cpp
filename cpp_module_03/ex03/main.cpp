/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:21:30 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/07 19:40:32 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap a("ClapTrack");
	ScavTrap b("ScavTrap");
	FragTrap c("FragTrap");
	DiamondTrap d("DiamondTrap");

	d.whoAmI();

	a.attack("ScavTrap");
	b.takeDamage(20);
	b.beRepaired(20);
	b.attack("FragTrap");
	b.guardGate();
	c.takeDamage(20);
	c.beRepaired(20);
	c.highFivesGuys();
	c.attack("DiamondTrap");
	d.takeDamage(30);
	d.beRepaired(30);
	d.guardGate();
	d.highFivesGuys();
	d.whoAmI();
	d.attack("ClapTrack");
	a.takeDamage(30);
	return (0);
}
