/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:47:24 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/20 19:39:32 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class AAnimal
{
protected:
	std::string type;
public:
	AAnimal(void);								// default constructor
	AAnimal(AAnimal& value);					// copy constructor
	AAnimal& operator=(const AAnimal& value);	// copy assignment operator overflow
	virtual ~AAnimal(void);						// destructor

	virtual void makeSound(void) const = 0;
	std::string getType(void) const;
};

#endif	/* ANIMAL_HPP */
