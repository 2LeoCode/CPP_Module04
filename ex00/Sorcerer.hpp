/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 21:15:52 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/21 22:37:03 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	public:

	Sorcerer(std::string name = "Robert", std::string title = "Fire Sorcerer");
	Sorcerer(const Sorcerer& src);
	~Sorcerer(void);

	void operator=(const Sorcerer& src);

	inline std::string getName(void) const { return (_name); }
	inline std::string getTitle(void) const { return (_title); }
	inline void polymorph(const Victim& victim) const { victim.getPolymorphed(); }

	private:

	std::string _name, _title;
};

std::ostream& operator<<(std::ostream &out, const Sorcerer &src);

#endif
