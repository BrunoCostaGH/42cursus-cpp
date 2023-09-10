/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:33:14 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/09/09 15:15:38 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <cstring>

class RPN
{
public:
	RPN();
	RPN(const RPN&);
	RPN& operator=(const RPN&);
	~RPN();

	static int calculate(std::stack<int>& stack);

	class RPNInvalidFormatException : public std::exception
	{
		virtual const char* what() const throw();
	};
};


