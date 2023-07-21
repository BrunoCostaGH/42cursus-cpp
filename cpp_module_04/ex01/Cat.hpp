/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:47:57 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/21 17:42:49 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	Brain* brain;
public:
	Cat(void);							// default constructor
	Cat(Cat& value);					// copy constructor
	Cat& operator=(const Cat& value);	// copy assignment operator overflow
	~Cat(void);							// destructor

	void makeSound(void) const;
};

#endif /* CAT_HPP */
