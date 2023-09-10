/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:13:10 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/06/13 00:29:31 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N;
	Zombie* pZombie;

	N = 5;
	pZombie = zombieHorde(N, "foobar");
	while (N--)
		pZombie[N].announce();
	delete[] pZombie;
	return (0);
}
