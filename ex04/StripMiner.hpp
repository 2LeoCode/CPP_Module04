/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:21:03 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/23 19:05:46 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP

# include "IMiningLaser.hpp"
# include "IAsteroid.hpp"

class StripMiner : public IMiningLaser
{
	public:

	StripMiner(void) { }
	~StripMiner(void) { }

	virtual void mine(IAsteroid * target);
};

#endif
