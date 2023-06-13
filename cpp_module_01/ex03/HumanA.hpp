/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:43:46 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/06/13 14:59:26 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	std::string name;
	Weapon* weapon;

public:
	HumanA();
	HumanA(const std::string& vName, Weapon& wValue);
	void attack();
};

#endif /* HUMANA_HPP */
