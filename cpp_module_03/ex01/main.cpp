/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:21:30 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/06 17:19:01 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("ClapTrack");
	ClapTrap b("ScavTrap");

	a.attack("ScavTrap");
	b.takeDamage(0);
	b.beRepaired(0);
	return (0);
}
