/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:59:57 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/09/06 18:50:23 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <list>
#include <deque>
#include <string>

template <typename T>
void	sortAlgorithm(T& container)
{
	int	straggler;

	if (container.size() % 2)
	{
		straggler = container.back();
		container.pop_back();
	}
}

template
void sortAlgorithm(std::list<int>& container);
template
void sortAlgorithm(std::deque<int>& container);
