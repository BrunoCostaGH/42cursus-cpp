/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:47:57 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/18 20:38:44 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();								// default constructor
	Cat(Cat& value);					// copy constructor
	Cat& operator=(const Cat& value);	// copy assignment operator overflow
	~Cat();								// destructor

	void makeSound() const;
};

#endif /* CAT_HPP */
