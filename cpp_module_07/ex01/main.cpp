/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:41:11 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/23 14:51:36 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	add(int &value)
{
	value += 1;
}

int main( void )
{
	int *sum = new int[5];

	sum[0] = 0;
	sum[1] = 1;
	sum[2] = 2;
	sum[3] = 3;
	sum[4] = 4;
	for (int i = 0; i < 5; ++i)
	{
		std::cout << sum[i] << std::endl;
	}
	::iter(sum, 5, add);
	std::cout << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		std::cout << sum[i] << std::endl;
	}

	delete[] sum;
	return 0;
}
