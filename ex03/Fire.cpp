/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 13:14:50 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/23 13:19:02 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fire.hpp"

void Fire::use(ICharacter & target)
{
	AMateria::use(target);
	std::cout << "* shoots a fireball at " << target.getName() << " *" << std::endl;
}
