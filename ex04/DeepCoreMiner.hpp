/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 17:57:55 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/23 19:04:10 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP

# include "IMiningLaser.hpp"
# include "IAsteroid.hpp"

class DeepCoreMiner : public IMiningLaser
{
	public:

	DeepCoreMiner(void) { }
	virtual ~DeepCoreMiner(void) { }

	virtual void mine(IAsteroid *);
};

#endif
