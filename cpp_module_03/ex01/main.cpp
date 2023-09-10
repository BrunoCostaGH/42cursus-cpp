/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:21:30 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/07 17:39:17 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap a("ClapTrack");
	ScavTrap b("ScavTrap");

	a.attack("ScavTrap");
	b.takeDamage(20);
	b.beRepaired(20);
	b.guardGate();
	return (0);
}
