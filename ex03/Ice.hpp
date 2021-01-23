/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 19:08:29 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/23 17:40:19 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:

	Ice(void) : AMateria("ice") { }
	~Ice(void) { }

	void use(ICharacter& target);
	AMateria* clone() const { return (new Ice()); }
};

#endif
