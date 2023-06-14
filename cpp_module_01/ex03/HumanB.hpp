/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:43:55 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/06/13 15:19:38 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	std::string name;
	Weapon* weapon;

public:
	HumanB();
	HumanB(const std::string& vName);
	void attack();
	void setWeapon(Weapon& wValue);
};

#endif /* HUMANB_HPP */
