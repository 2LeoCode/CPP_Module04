/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:13:28 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/22 17:34:51 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:

	TacticalMarine(void) { std::cout << "Tactical Marine ready for battle!" << std::endl; }
	~TacticalMarine(void) { std::cout << "Aaargh..." << std::endl; }

	virtual inline ISpaceMarine* clone(void) const { return (new TacticalMarine); }
	virtual inline void battleCry(void) const { std::cout << "For the holy PLOT!" << std::endl; }
	virtual inline void rangedAttack(void) const { std::cout << "* attacks with a bolter *" << std::endl; }
	virtual inline void meleeAttack(void) const { std::cout << "* attacks with a chainsword *" << std::endl; }
};

#endif
