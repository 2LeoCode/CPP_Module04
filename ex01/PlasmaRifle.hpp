/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 23:50:15 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/21 23:51:06 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:

	PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) { }
	virtual ~PlasmaRifle(void) { }

	virtual inline void attack(void) const { std::cout << "* piouuu piouuu piouuu *" << std::endl; }
};

#endif
