/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 00:31:31 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/22 16:03:49 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

void Character::operator=(const Character& src)
{
	_name = src._name;
	_ap = src._ap;
	_weapon = src._weapon;
}

std::ostream & operator<<(std::ostream & out, Character & ch)
{
	out << ch.getName() << " has " << ch.getAP() << " AP and ";
	if (ch.getWeapon())
		std::cout << "wields a " << ch.getWeapon()->getName() << std::endl;
	else
		std::cout << "is unarmed" << std::endl;
	return (out);
}

void Character::attack(Enemy * enemy)
{
	if (!enemy)
		std::cout << "Enemy not found" << std::endl;
	else
	{
		if (!_weapon)
			std::cout << _name << " is unarmed" << std::endl;
		else if (_ap < _weapon->getAPCost())
			std::cout << _name << " hasn't enough AP to attack with a" << _weapon->getName() << std::endl;
		else
		{
			std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
			_weapon->attack();
			enemy->takeDamage(_weapon->getDamage());
			_ap -= _weapon->getAPCost();
		}
	}
}
