/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 23:11:59 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/22 01:10:03 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

void AWeapon::operator=(const AWeapon& src)
{
	_name = src._name;
	_apcost = src._apcost;
	_damage = src._damage;
}

std::ostream & operator<<(std::ostream & out, AWeapon & weapon)
{
	out << "Weapon Info: NAME " << weapon.getName() << ", DAMAGE " << weapon.getDamage() << ", AP COST " << weapon.getAPCost() << std::endl;
	return (out);
}
