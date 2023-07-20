/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:02:06 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/20 21:33:32 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();								// default constructor
	Ice(Ice& value);					// copy constructor
	Ice& operator=(const Ice& value);	// copy assignment operator overflow
	~Ice();								// destructor

	AMateria * clone() const;
	void use(ICharacter &target);
};

#endif /* ICE_HPP */
