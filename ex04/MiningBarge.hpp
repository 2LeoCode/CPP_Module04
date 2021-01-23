/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:27:24 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/23 18:37:22 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP

# include "IMiningLaser.hpp"
# include "IAsteroid.hpp"

class MiningBarge
{
	public:

	MiningBarge(void) : _lasers() { }
	~MiningBarge(void) { for (int i = 0; (i < 4) && _lasers[i]; i++) delete _lasers[i]; }

	void equip(IMiningLaser *);
	void mine(IAsteroid * asteroid) const;


	private:

	IMiningLaser * _lasers[4];
};

#endif
