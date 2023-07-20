/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:03:22 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/20 21:39:38 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();								// default constructor
	Cure(Cure &value);					// copy constructor
	Cure &operator=(const Cure &value);	// copy assignment operator overflow
	~Cure();							// destructor

	AMateria * clone() const;
	void use(ICharacter &target);
};
#endif /* CURE_HPP */
