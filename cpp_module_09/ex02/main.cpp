/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:59:37 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/09/07 12:26:43 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <limits>
#include <sys/time.h>
#include <iomanip>
#include "PmergeMe.hpp"

static double	timestamp(double& ml_ini)
{
	double					ml_cur;
	struct timeval			timeval;

	gettimeofday(&timeval, NULL);
	ml_cur = (timeval.tv_sec + timeval.tv_usec / 1000000.0);
	if (!ml_ini)
		ml_ini = (timeval.tv_sec + timeval.tv_usec / 1000000.0);
	return (ml_cur - ml_ini);
}

template <typename T>
static T convert(const std::string& value)
{
	T _return;
	std::stringstream ss(value);

	ss >> _return;
	return (_return);
}

static bool isValidPositiveInteger(const std::string& value)
{
	if (value.find_first_not_of("0123456789") == std::string::npos)
	{
		int number = convert<int>(value);
		if (number >= std::numeric_limits<int>::min() && number <= std::numeric_limits<int>::max())
			return (true);
	}
	return (false);
}

template <typename T>
static void	fillContainer(T& container, char **argv)
{
	for (int i = 0; argv[i]; ++i)
	{
		if (isValidPositiveInteger(argv[i]))
			container.push_back(convert<int>(argv[i]));
		else
		{
			std::cout << "Error: `" << argv[i] << "': Unknown value\n";
			return;
		}
	}
}

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Usage:\n\t./PmergeMe <positive_integer_sequence>\n";
		return (1);
	}
	std::vector<int>	vector;
	std::deque<int>		deque;

	{
		double	ml_ini = 0;

		(void)timestamp(ml_ini);
		fillContainer(vector, argv + 1);
		sortAlgorithm(vector);
		std::cout << "Time to process a range of " << vector.size() << \
			" elements with " << "std::vector" << " : " << std::fixed << \
				std::setprecision(5) << timestamp(ml_ini) << " us\n";
/*		std::cout << "Container:";
		for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); ++it)
		{
			std::cout << " " << *it;
		}
		std::cout << "\n";*/
	}
	{
		double	ml_ini = 0;

		(void)timestamp(ml_ini);
		fillContainer(deque, argv + 1);
		sortAlgorithm(deque);
		std::cout << "Time to process a range of " << deque.size() << \
			" elements with " << "std::deque" << " : " << std::fixed << \
				std::setprecision(5) << timestamp(ml_ini) << " us\n";
/*		std::cout << "Container:";
		for (std::deque<int>::iterator it = deque.begin(); it != deque.end(); ++it)
		{
			std::cout << " " << *it;
		}
		std::cout << "\n";*/
	}
	return (0);
}
