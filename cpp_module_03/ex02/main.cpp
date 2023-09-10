/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:21:30 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/07 17:56:06 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap a("ClapTrack");
	ScavTrap b("ScavTrap");
	FragTrap c("FragTrap");

	a.attack("ScavTrap");
	b.takeDamage(30);
	b.beRepaired(30);
	b.attack("FragTrap");
	b.guardGate();
	c.takeDamage(20);
	c.beRepaired(20);
	c.highFivesGuys();
	return (0);
}
