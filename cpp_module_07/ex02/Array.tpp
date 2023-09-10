/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:36:00 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/23 15:36:00 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Array.hpp"

template<typename T>
Array<T>::Array()
	: elems(new T[0]), arrSize(0)
{
}

template<typename T>
Array<T>::Array(unsigned int n)
	: elems(new T[n]), arrSize(n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		this->elems[i] = 0;
	}
}

template<typename T>
Array<T>::Array(const Array<T>& value)
	: elems(new T[value.size()]), arrSize(value.size())
{
	for (unsigned int i = 0; i < value.size(); i++)
	{
		this->elems[i] = value.elems[i];
	}
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& value)
{
	if (this == &value)
		return (*this);
	delete[] this->elems;
	this->elems = new T[value.size()];
	for (unsigned int i = 0; i < value.size(); i++)
	{
		this->elems[i] = value.elems[i];
	}
	this->arrSize = value.size();
	return (*this);
}

template<typename T>
Array<T>::~Array()
{
	delete[] this->elems;
}

template<typename T>
unsigned int Array<T>::size() const
{
	return (this->arrSize);
}

template<typename T>
T& Array<T>::operator[](unsigned int n)
{
	if (n > this->size())
		throw (Array<T>::OutOfBoundsException());
	return (this->elems[n]);
}

template<typename T>
const char* Array<T>::OutOfBoundsException::what() const throw()
{
	return ("Specified index is out of bounds!\n");
}
