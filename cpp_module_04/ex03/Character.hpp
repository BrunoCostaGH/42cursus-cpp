/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:04:13 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/21 18:41:43 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

class Character : public ICharacter
{
	AMateria *materia[4];
	AMateria *unequippedMateria[4];
	std::string name;

public:
	Character(void);								// default constructor
	Character(const std::string& name);				// parameterized constructor
	Character(Character& value);					// copy constructor
	Character& operator=(const Character& value);	// copy assignment operator
	~Character(void);								// destructor

	const std::string & getName(void) const;

	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif /* CHARACTER_HPP */
