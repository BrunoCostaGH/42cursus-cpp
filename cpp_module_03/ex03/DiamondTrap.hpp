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
	DiamondTrap();
	DiamondTrap(const std::string& value);
	DiamondTrap(const DiamondTrap& value);
	DiamondTrap& operator=(const DiamondTrap& value);
	~DiamondTrap();

	using ScavTrap::attack;
	void whoAmI();
};

#endif /* DIAMONDTRAP_HPP */
