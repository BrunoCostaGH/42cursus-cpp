/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:21:54 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/21 19:05:48 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
protected:
	std::string	name;
	int			hitPoints;
	int			energyPoints;
	int			attackDamage;

public:
	ClapTrap(const std::string& value);			// Parameterized Constructor
	/* Orthodox Canonical Form */
	ClapTrap(void);								// Constructor
	ClapTrap(ClapTrap& value);					// Copy Constructor
	ClapTrap& operator=(const ClapTrap& value);	// Copy Assignment Operator Overload
	~ClapTrap(void);							// Destructor
	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif /* CLAPTRAP_HPP */
