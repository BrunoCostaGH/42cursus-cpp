/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:01:51 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/06/14 18:01:08 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(void)
{
	Harl person;

	std::cout << "\n[ DEBUG ]" << std::endl;
	person.complain("debug");
	std::cout << "\n[ INFO ]" << std::endl;
	person.complain("info");
	std::cout << "\n[ WARNING ]" << std::endl;
	person.complain("warning");
	std::cout << "\n[ ERROR ]" << std::endl;
	person.complain("error");
	return (0);
}
