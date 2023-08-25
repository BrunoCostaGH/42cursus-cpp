/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:20:09 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/25 14:29:55 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>

/*
 *
 * RETURN VALUE
 * If return value is -1 when integer was not found in the container, otherwise
 * its position in the container is returned.
 */
template<typename T>
int easyfind(T container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);

	if(it != container.end())
		return (std::distance(container.begin(), it));
	else
	{
		return (-1);
	}
}
