/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:47:44 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/21 17:42:55 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	Brain* brain;
public:
	Dog();
	Dog(const Dog& value);
	Dog& operator=(const Dog& value);
	~Dog();

	void makeSound() const;
};

#endif /* DOG_HPP */
