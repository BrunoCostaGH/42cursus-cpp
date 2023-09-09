/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:51:12 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/09/09 15:18:10 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{}

RPN::RPN(const RPN&)
{}

RPN& RPN::operator=(const RPN&)
{
	return (*this);
}

RPN::~RPN()
{}

static int	execute(std::stack<int>& stack, int firstNumber, int secondNumber)
{
	switch (stack.top())
	{
	case '+':
		return (firstNumber + secondNumber);
	case '-':
		return (firstNumber - secondNumber);
	case '/':
		return (firstNumber / secondNumber);
	case '*':
		return (firstNumber * secondNumber);
	}
	return (0);
}

/*
 *
 * RETURN VALUE
 * If RPN expression is valid returns it's result, otherwise throws an exception.
 */
 int	RPN::calculate(std::stack<int>& stack)
{
	int firstNumber;
	int secondNumber;

	firstNumber = stack.top();
	stack.pop();
	while (!stack.empty() && stack.top() < 10)
	{
		secondNumber = stack.top();
		stack.pop();
		if (!stack.empty() && stack.top() < 10)
		{
			stack.push(secondNumber);
			secondNumber = calculate(stack);
		}
		if (!stack.empty() && strchr("+-/*", stack.top()))
		{
			firstNumber = execute(stack, firstNumber, secondNumber);
			stack.pop();
		}
		else
			throw (RPN::RPNInvalidFormatException());
	}
	return (firstNumber);
}

const char* RPN::RPNInvalidFormatException::what() const throw()
{
	return ("Error: Expression is not a valid RPN expression!\n");
}
