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
	AMateria();
	AMateria(const std::string& type);
	AMateria(const AMateria& value);
	AMateria& operator=(const AMateria& value);
	virtual ~AMateria();

	std::string const& getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter&);
};

#endif /* AMATERIA_HPP */
