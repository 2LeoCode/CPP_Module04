/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 19:23:21 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/23 17:22:44 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::~Character(void)
{
	for (int i = 0; (i < 4) && _inv[i]; i++)
		delete _inv[i];
}

Character::Character(const Character & src) : _name(src._name)
{
	for (int i = 0; (i < 4) && src._inv[i]; i++)
		_inv[i] = src._inv[i]->clone();
}

void Character::operator=(const Character& src)
{
	_name = src._name;
	for (int i = 0; (i < 4) && src._inv[i]; i++)
		_inv[i] = src._inv[i]->clone();
}

void Character::equip(AMateria * m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
		if (!_inv[i])
		{
			_inv[i] = m;
			return ;
		}
		else if (_inv[i]->getType() == m->getType())
		{
			std::cout << '`' << m->getType() << "` is already in " << _name << "'s inventory" << std::endl;
			return ;
		}
	std::cout << _name << "'s inventory is full" << std::endl;
}

void Character::unequip(int idx)
{
	if ((idx < 0) || (idx > 3))
		std::cout << "Wrong slot ID `" << idx << '`' << std::endl;
	else
		_inv[idx] = nullptr;
}

void Character::use(int idx, ICharacter & target)
{
	if ((idx < 0) || (idx > 3))
		std::cout << "Wrong slot ID `" << idx << '`' << std::endl;
	else if (!_inv[idx])
		std::cout << "Slot `" << idx << "` is empty" << std::endl;
	else
		_inv[idx]->use(target);
}

AMateria * Character::getInv(int idx)
{
	if ((idx < 0) || (idx > 3))
		std::cout << "Wrong slot ID `" << idx << '`' << std::endl;
	else if (!_inv[idx])
		std::cout << "Slot `" << idx << "` is empty" << std::endl;
	else
		return (_inv[idx]);
	return (nullptr);
}