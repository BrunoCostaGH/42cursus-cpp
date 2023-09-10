/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:20:46 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/21 19:07:03 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string& value);
	ScavTrap(const ScavTrap& value);
	ScavTrap& operator=(const ScavTrap& value);
	~ScavTrap();

	void attack(const std::string& target);
	void guardGate();
};

#endif /* SCAVTRAP_HPP */
