/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMiningLaser.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 17:53:10 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/23 18:56:26 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMININGLASER_HPP
# define IMININGLASER_HPP

# include <iostream>
# include "IAsteroid.hpp"

class IAsteroid;

class IMiningLaser
{
	public:

	virtual ~IMiningLaser() { }
	virtual void mine(IAsteroid *) = 0;
};

# include "DeepCoreMiner.hpp"
# include "StripMiner.hpp"

#endif
