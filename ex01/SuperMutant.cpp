/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 00:24:11 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/22 00:25:33 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

void SuperMutant::takeDamage(int amount)
{
	amount -= 3;
	if (amount < 0)
		return ;
	_hp -= amount;
	if (_hp <= 0)
		delete this;
}
