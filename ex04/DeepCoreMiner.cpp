/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 19:03:32 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/23 19:07:04 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"

void DeepCoreMiner::mine(IAsteroid * target)
{
	if (target)
		std::cout << "* mining deep... got " << target->beMined(this) << " *" << std::endl;
}
