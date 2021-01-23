/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 23:04:38 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/22 01:10:08 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
	public:

	AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage) { }
	AWeapon(const AWeapon & src) : _name(src._name), _apcost(src._apcost), _damage(src._damage) { }
	virtual ~AWeapon(void) { }

	void operator=(const AWeapon& src);

	inline std::string getName(void) const { return (_name); }
	inline int getAPCost(void) const { return (_apcost); }
	inline int getDamage(void) const { return (_damage); }
	inline virtual void attack(void) const = 0;


	protected:

	std::string _name;
	int _apcost, _damage;
};

std::ostream & operator<<(std::ostream & out, AWeapon & weapon); 

#endif
