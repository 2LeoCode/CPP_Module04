/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Comet.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:18:30 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/23 19:16:36 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMET_HPP
# define COMET_HPP

# include "IAsteroid.hpp"
# include "IMiningLaser.hpp"

class IMiningLaser;

class Comet : public IAsteroid
{
	public:

	Comet(void) : _name("Comet") { }
	~Comet(void) { }

	virtual inline std::string beMined(DeepCoreMiner *) const { return ("Meium"); }
	virtual inline std::string beMined(StripMiner *) const { return ("Tartarite"); }
	virtual inline std::string getName(void) const { return (_name); }


	private:

	std::string _name;
};

#endif
