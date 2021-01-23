/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:44:58 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/23 18:51:58 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"
#include "MiningBarge.hpp"

int main(void)
{
	IAsteroid * c = new Comet;
	IAsteroid * a = new Asteroid;

	IMiningLaser * deepCore[2] = {new DeepCoreMiner, new DeepCoreMiner};
	IMiningLaser * strip[3] = {new StripMiner, new StripMiner, new StripMiner};

	MiningBarge barge;

	barge.equip(deepCore[0]);
	barge.equip(deepCore[1]);
	barge.equip(strip[0]);
	barge.equip(strip[1]);
	barge.equip(strip[2]);

	barge.mine(c);
	barge.mine(a);

	delete c;
	delete a;
	delete strip[2];
	return (0);
}