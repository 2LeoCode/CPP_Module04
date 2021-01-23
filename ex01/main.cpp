/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 00:39:13 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/22 16:07:36 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AWeapon.hpp"
# include "Character.hpp"
# include "Enemy.hpp"
# include "PlasmaRifle.hpp"
# include "PowerFist.hpp"
# include "SuperMutant.hpp"
# include "RadScorpion.hpp"

int main()
{
	Character * me = new Character("me");
	std::cout << *me;
	Enemy * b = new RadScorpion();
	AWeapon * pr = new PlasmaRifle();
	AWeapon * pf = new PowerFist();
	Enemy * m = new SuperMutant();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	me->equip(pf);
	std::cout << *me << *me->getWeapon() << *m;
	me->attack(m);
	std::cout << *me;
	me->attack(m);
	std::cout << *me;
	me->attack(m);
	delete m;
	delete pr;
	delete pf;
	delete me;
	return (0);
}
