/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:37:31 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/23 19:00:31 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"

void MiningBarge::equip(IMiningLaser * laser)
{
	for (int i = 0; (i < 4); i++)
		if (!_lasers[i])
		{
			_lasers[i] = laser;
			return ;
		}
	std::cout << "Reached the laser limit" << std::endl;
}

void MiningBarge::mine(IAsteroid * asteroid) const
{
	if (asteroid)
		for (int i = 0; (i < 4) && _lasers[i]; i++)
			_lasers[i]->mine(asteroid);
}
