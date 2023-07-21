/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:02:15 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/21 17:41:07 by bsilva-c         ###   ########.fr       */
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
	WrongAnimal(void);									// default constructor
	WrongAnimal(WrongAnimal& value);					// copy constructor
	WrongAnimal& operator=(const WrongAnimal& value);	// copy assignment operator overflow
	virtual ~WrongAnimal(void);							// destructor

	void makeSound(void) const;
	std::string getType(void) const;
};

#endif /* WRONGANIMAL_HPP */
