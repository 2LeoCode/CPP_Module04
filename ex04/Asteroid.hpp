/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Asteroid.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:22:51 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/23 18:58:42 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASTEROID_HPP
# define ASTEROID_HPP

# include "IAsteroid.hpp"

class Asteroid : public IAsteroid
{
	public:

	Asteroid(void) : _name("Asteroid") { }
	~Asteroid(void) { }

	virtual inline std::string beMined(DeepCoreMiner *) const { return ("Dragonite"); }
	virtual inline std::string beMined(StripMiner *) const { return ("Flavium"); }
	virtual inline std::string getName() const { return (_name); }


	private:

	std::string _name;
};

#endif
