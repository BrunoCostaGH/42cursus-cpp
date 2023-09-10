/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:54:42 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/31 16:05:03 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T, typename U>
void iter(T* address, int length, void(* f)(U&))
{
	for (int i = 0; i < length; i++)
	{
		f(address[i]);
	}
}
