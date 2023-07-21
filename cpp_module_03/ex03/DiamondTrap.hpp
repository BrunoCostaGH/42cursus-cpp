/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:58:21 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/21 19:08:08 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	std::string name;

public:
	DiamondTrap(const std::string& value);				// Parameterized Constructor
	/* Orthodox Canonical Form */
	DiamondTrap(void);									// Constructor
	DiamondTrap(DiamondTrap& value);					// Copy Constructor
	DiamondTrap& operator=(const DiamondTrap& value);	// Copy Assignment Operator Overload
	~DiamondTrap(void);									// Destructor
	/* -- */

	using ScavTrap::attack;
	void whoAmI(void);
};

#endif /* DIAMONDTRAP_HPP */
