/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 16:24:29 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/22 17:33:21 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"


struct ISpaceMarineList
{
	ISpaceMarine * current;
	ISpaceMarineList * next;
};

class Squad : public ISquad
{
	public:

	Squad(void) : _soldiers(nullptr) { }
	Squad(const Squad& src) : _soldiers(src._soldiers) { }
	~Squad(void);

	inline void operator=(const Squad& src) { _soldiers = src._soldiers; }

	virtual int getCount(void) const;
	virtual ISpaceMarine* getUnit(int i) const;
	virtual int push(ISpaceMarine * soldier);


	private:

	ISpaceMarineList * _soldiers;
};

#endif
