/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:54:58 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/26 16:08:23 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

template<class T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack();
	MutantStack(const MutantStack<T>&);
	MutantStack<T>& operator=(const MutantStack<T>&);
	~MutantStack();

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin();
	iterator end();
};
