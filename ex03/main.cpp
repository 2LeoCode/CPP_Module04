/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 20:58:27 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/23 17:29:58 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Fire.hpp"
#include "Wind.hpp"

int main(void)
{
	IMateriaSource * src = new MateriaSource();
	MateriaSource srcCloneDummy;

	src->learnMateria(new Ice());

	srcCloneDummy.learnMateria(new Ice());
	srcCloneDummy.learnMateria(new Fire());
	srcCloneDummy.learnMateria(new Wind());

	MateriaSource srcClone(srcCloneDummy);

	ICharacter * me = new Character("me");

	AMateria * tmp = new Cure;
	AMateria * clone = tmp->clone();

	src->learnMateria(tmp);
	src->learnMateria(clone);

	delete clone;
	tmp = srcClone.createMateria("ice");
	me->equip(tmp);
	tmp = srcClone.createMateria("cure");
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	tmp = srcClone.createMateria("foo");
	tmp = srcClone.createMateria("fire");
	me->equip(tmp);
	tmp = srcClone.createMateria("wind");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(3, *bob);
	me->use(3, *bob);
	me->use(-5, *bob);
	me->equip(nullptr);

	std::cout << "ICE XP " << ((Character*)me)->getInv(0)->getXP() << std::endl;
	std::cout << "CURE XP " << ((Character*)me)->getInv(1)->getXP() << std::endl;
	std::cout << "FIRE XP " << ((Character*)me)->getInv(2)->getXP() << std::endl;
	std::cout << "WIND XP " << ((Character*)me)->getInv(3)->getXP() << std::endl;

	delete bob;
	delete me;
	delete src;
	return (0);
}
