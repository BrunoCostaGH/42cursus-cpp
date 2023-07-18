/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:47:24 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/18 20:36:29 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();								// default constructor
	Animal(Animal& value);					// copy constructor
	Animal& operator=(const Animal& value);	// copy assignment operator overflow
	virtual ~Animal();						// destructor

	virtual void makeSound() const;
	std::string getType() const;
};

#endif	/* ANIMAL_HPP */
