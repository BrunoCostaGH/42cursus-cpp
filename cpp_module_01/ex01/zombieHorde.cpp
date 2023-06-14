/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 19:46:42 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/06/13 00:20:25 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *pZombie;

	if (!N || name.empty())
		return (0);
	pZombie = new Zombie[N];
	while (N--)
		pZombie[N] = Zombie(name);
	return (pZombie);
}
