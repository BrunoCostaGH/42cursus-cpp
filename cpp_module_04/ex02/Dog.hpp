/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:47:44 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/20 17:46:45 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	Brain* brain;
public:
	Dog(void);							// default constructor
	Dog(Dog& value);					// copy constructor
	Dog& operator=(const Dog& value);	// copy assignment operator overflow
	~Dog(void);							// destructor

	void makeSound(void) const;
};

#endif /* DOG_HPP */
