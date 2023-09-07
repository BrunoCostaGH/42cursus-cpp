/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:59:57 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/09/07 12:26:45 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <deque>
#include <vector>
#include <string>

template <typename T>
T&	sortAlgorithm(T& container)
{
	if (container.size() <= 1)
		return (container);

	int	straggler = 0;
	if (container.size() % 2)
	{
		straggler = container.back();
		container.pop_back();
	}
	int	midPoint = container.size() / 2;
	T	left(container.begin(), container.begin() + midPoint);
	T	right(container.begin() + midPoint, container.end());

	left = sortAlgorithm(left);
	right = sortAlgorithm(right);

	container.clear();
	while (left.size() && right.size())
	{
		if (left.front() < right.front())
		{
			container.push_back(left.front());
			left.erase(left.begin());
		}
		else
		{
			container.push_back(right.front());
			right.erase(right.begin());
		}
	}
	while (left.size())
	{
		container.push_back(left.front());
		left.erase(left.begin());
	}
	while (right.size())
	{
		container.push_back(right.front());
		right.erase(right.begin());
	}
	if (straggler)
	{
		for (typename T::iterator it = container.begin(); it != container.end(); ++it)
		{
			if (*it > straggler)
			{
				container.insert(it, straggler);
				return (container);
			}
		}
		container.push_back(straggler);
	}
	return (container);
}

template
std::vector<int>& sortAlgorithm(std::vector<int>& container);
template
std::deque<int>& sortAlgorithm(std::deque<int>& container);
