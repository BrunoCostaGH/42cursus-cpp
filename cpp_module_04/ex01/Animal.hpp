/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:47:24 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/21 17:42:33 by bsilva-c         ###   ########.fr       */
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
	Animal(void);							// default constructor
	Animal(Animal& value);					// copy constructor
	Animal& operator=(const Animal& value);	// copy assignment operator overflow
	virtual ~Animal(void);					// destructor

	virtual void makeSound(void) const;
	std::string getType(void) const;
};

#endif	/* ANIMAL_HPP */
