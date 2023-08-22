/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:30:01 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/22 12:56:05 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data *data = new Data;
	uintptr_t uData;

	std::cout << data << std::endl;
	uData = Serializer::serialize(data);

	std::cout << uData << std::endl;

	data = Serializer::deserialize(uData);
	std::cout << data << std::endl;

	delete data;
	return (0);
}
