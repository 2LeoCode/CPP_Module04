/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 19:05:04 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/23 19:06:32 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StripMiner.hpp"

void StripMiner::mine(IAsteroid * target)
{
	if (target)
		std::cout << "* strip mining... got " << target->beMined(this) << " *" << std::endl;
}
