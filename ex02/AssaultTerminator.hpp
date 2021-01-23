/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:29:53 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/22 17:34:37 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:

	AssaultTerminator(void) { std::cout << "* teleports from space *" << std::endl; }
	~AssaultTerminator(void) { std::cout << "I'll be back.." << std::endl; }

	virtual inline ISpaceMarine* clone(void) const { return (new AssaultTerminator); }
	virtual inline void battleCry(void) const { std::cout << "This code is unclean. PURIFY IT!" << std::endl; }
	virtual inline void rangedAttack(void) const { std::cout << "* does nothing *" << std::endl; }
	virtual inline void meleeAttack(void) const { std::cout << "* attacks with chainfists *" << std::endl; }
};

#endif
