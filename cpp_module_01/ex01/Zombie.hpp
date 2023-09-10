/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:13:32 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/06/13 00:27:43 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	std::string name;

public:
	Zombie();
	Zombie(const std::string& value);
	~Zombie();
	void announce();
};

Zombie* zombieHorde(int N, std::string name);

#endif /* ZOMBIE_HPP */
