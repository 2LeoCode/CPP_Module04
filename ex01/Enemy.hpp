/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 00:01:34 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/22 15:55:37 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
	public:

	Enemy(int hp, std::string const & type) : _type(type), _hp(hp) { }
	Enemy(const Enemy & src) : _type(src._type), _hp(src._hp) { }
	virtual ~Enemy(void) { }

	void operator=(const Enemy & src);

	inline std::string getType(void) const { return (_type); }
	inline int getHp(void) const { return (_hp); }
	virtual void takeDamage(int amount);


	protected:

	std::string _type;
	int _hp;
};

std::ostream & operator<<(std::ostream & out, Enemy & enemy);

#endif
