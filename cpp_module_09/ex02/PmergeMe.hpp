/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:59:57 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/09/20 20:13:28 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <deque>
#include <vector>
#include <string>

template<class T>
static void insertion(T& container, int value)
{
	for (typename T::iterator it = container.begin(); it != container.end(); ++it)
	{
		if (*it > value)
		{
			container.insert(it, value);
			return ;
		}
	}
	container.push_back(value);
}

template<class T>
static T& sortAlgorithm(T& container)
{
	if (container.size() <= 1)
		return (container);
	// Check for straggler
	int straggler = 0;
	if (container.size() % 2)
	{
		straggler = container.back();
		container.pop_back();
	}

	typename T::iterator it;
	int value[2];
	// Order first element of each pair, sorting group
	for (size_t i = 0; i < (container.size() / 2); i++)
	{
		it = container.begin();
		std::advance(it, i);
		value[0] = container.at(i);
		value[1] = container.at(i + 1);

		container.erase(it, it + 2);
		if (value[0] > value[1])
		{
			container.push_back(value[0]);
			insertion(container, value[1]);
		}
		else
		{
			container.push_back(value[1]);
			insertion(container, value[0]);
		}
	}
	//TODO Sort second half of the container

	// Insert straggler back
	if (straggler)
		insertion(container, straggler);
	return (container);
}

class PmergeMe
{
public:
	PmergeMe();
	PmergeMe(const PmergeMe&);
	PmergeMe& operator=(const PmergeMe&);
	~PmergeMe();

	template<typename T>
	static void sort(T& container)
	{
		(void)sortAlgorithm(container);
	}
};
