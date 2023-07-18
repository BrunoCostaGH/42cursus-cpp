/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:40:35 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/07 19:06:36 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(const std::string& name);			// Parameterized Constructor
	/* Orthodox Canonical Form */
	FragTrap(void);								// Constructor
	FragTrap(FragTrap& value);					// Copy Constructor
	FragTrap& operator=(const FragTrap& value);	// Copy Assignment Operator Overload
	~FragTrap(void);							// Destructor
	/* -- */
	using ClapTrap::attack;
	void highFivesGuys(void);
};

#endif /* FRAGTRAP_HPP */