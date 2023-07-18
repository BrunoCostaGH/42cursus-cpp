/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:47:44 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/18 20:34:34 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();								// default constructor
	Dog(Dog& value);					// copy constructor
	Dog& operator=(const Dog& value);	// copy assignment operator overflow
	~Dog();								// destructor

	void makeSound() const;
};

#endif /* DOG_HPP */
