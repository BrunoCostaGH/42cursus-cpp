/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:41:43 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/23 13:53:14 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
void swap(T& value1, T& value2)
{
	T temp = value1;

	value1 = value2;
	value2 = temp;
}

template<typename T>
T min(T value1, T value2)
{
	if (value1 >= value2)
		return (value2);
	return (value1);
}

template<typename T>
T max(T value1, T value2)
{
	if (value1 <= value2)
		return (value2);
	return (value1);
}
