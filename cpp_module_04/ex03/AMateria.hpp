/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:46:30 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/21 18:32:05 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string type;

public:
	AMateria();									// default constructor
	AMateria(std::string const & type);			// parameterized constructor
	AMateria(AMateria& value);					// copy constructor
	AMateria& operator=(const AMateria& value);	// copy assignment operator overflow
	virtual ~AMateria(void);					// destructor

	std::string const & getType(void) const; //Returns the materia type

	virtual AMateria* clone(void) const = 0;
	virtual void use(ICharacter &);
};

#endif /* AMATERIA_HPP */
