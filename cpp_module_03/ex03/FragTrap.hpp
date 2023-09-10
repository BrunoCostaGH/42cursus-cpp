/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:40:35 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/21 19:07:53 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string& value);
	FragTrap(const FragTrap& value);
	FragTrap& operator=(const FragTrap& value);
	~FragTrap();

	using ClapTrap::attack;
	void highFivesGuys();
};

#endif /* FRAGTRAP_HPP */
