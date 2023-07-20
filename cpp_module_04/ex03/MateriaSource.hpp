/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:14:22 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/20 21:49:09 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	AMateria *materia[4];
public:
	MateriaSource(void);									// default constructor
	MateriaSource(MateriaSource& value);					// copy constructor
	MateriaSource& operator=(const MateriaSource& value);	// copy assignment operator
	~MateriaSource(void);									// destructor

	void learnMateria(AMateria *);
	AMateria * createMateria(const std::string &type);
};

#endif	/* MATERIASOURCE_HPP */
