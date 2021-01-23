/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 21:19:00 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/21 22:49:23 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
	public:

	Peon(std::string name);
	Peon(const Peon& src);
	virtual ~Peon(void);

	void operator=(const Peon& src);

	virtual inline void getPolymorphed(void) const { std::cout << _name << " has been turned into a pink pony!" << std::endl; }
};

#endif
