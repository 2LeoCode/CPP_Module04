/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 23:48:09 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/21 23:51:30 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:

	PowerFist(void) : AWeapon("Power Fist", 8, 50) { }
	virtual ~PowerFist(void) { }

	virtual inline void attack(void) const { std::cout << "* pschhh... SBAM! *" << std::endl; }
};

#endif
