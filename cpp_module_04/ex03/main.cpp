/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:45:09 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/20 23:06:38 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->use(0, *bob);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->use(1, *bob);
	me->unequip(0);

	delete bob;
	delete me;
	delete src;

	return 0;
}
