/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:13:10 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/06/12 20:23:34 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int		N;
	Zombie	*pZombie;

	N = 5;
	pZombie = zombieHorde(N, "foo");
	while (N--)
		pZombie[N].announce();
	return (0);
}
