/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:02:15 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/18 21:31:38 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();										// default constructor
	WrongAnimal(WrongAnimal& value);					// copy constructor
	WrongAnimal& operator=(const WrongAnimal& value);	// copy assignment operator overflow
	virtual ~WrongAnimal();								// destructor

	void makeSound() const;
	std::string getType() const;
};

#endif /* WRONGANIMAL_HPP */
