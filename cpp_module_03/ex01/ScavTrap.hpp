/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:20:46 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/07 17:32:06 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
public:
	ScavTrap(const std::string& value);			// Parameterized Constructor
	/* Orthodox Canonical Form */
	ScavTrap(void);								// Constructor
	ScavTrap(ScavTrap& value);					// Copy Constructor
	ScavTrap& operator=(const ScavTrap& value);	// Copy Assignment Operator Overload
	~ScavTrap(void);							// Destructor
	/* -- */
	void attack(const std::string& target);
	void guardGate(void);
};

#endif /* SCAVTRAP_HPP */
