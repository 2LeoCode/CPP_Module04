/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 00:07:09 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/22 01:06:34 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

void Enemy::operator=(const Enemy& src)
{
	_type = src._type;
	_hp = src._hp;
}

void Enemy::takeDamage(int amount)
{
	if (amount < 0)
		return ;
	_hp -= amount;
	if (_hp <= 0)
		delete this;
}

std::ostream & operator<<(std::ostream & out, Enemy & enemy)
{
	out << "Enemy Info: HEALTH " << enemy.getHp() << ", TYPE " << enemy.getType() << std::endl;
	return (out);
}
