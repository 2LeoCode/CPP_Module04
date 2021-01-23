/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wind.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 16:58:59 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/23 17:00:01 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Wind.hpp"

void Wind::use(ICharacter & target)
{
	AMateria::use(target);
	std::cout << "* throws " << target.getName() << " away with the power of wind *" << std::endl;
}
