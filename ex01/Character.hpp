/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 00:00:27 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/22 16:04:33 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	public:

	Character(std::string const & name) : _name(name), _ap(40), _weapon(nullptr) { }
	Character(const Character & src) : _name(src._name), _ap(src._ap), _weapon(src._weapon) { }
	~Character(void) { }

	void operator=(const Character & src);

	inline void recoverAP(void) { _ap += (10 - (_ap > 30) * (_ap - 30)); }
	inline void equip(AWeapon * weapon) { _weapon = weapon; }
	void attack(Enemy * enemy);
	inline std::string getName(void) const { return (_name); }
	inline int getAP(void) const { return (_ap); }
	inline AWeapon * getWeapon(void) const { return (_weapon); }


	private:

	std::string _name;
	int _ap;
	AWeapon * _weapon;
};

std::ostream & operator<<(std::ostream & out, Character & ch);

#endif
