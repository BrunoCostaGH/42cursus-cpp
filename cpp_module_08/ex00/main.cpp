/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:19:06 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/25 14:30:29 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main(void)
{
	std::vector<int> val;

	val.push_back(1);
	val.push_back(2);
	val.push_back(3);

	std::cout << "Index " << easyfind(val, 0) << std::endl;

	return (0);
}
