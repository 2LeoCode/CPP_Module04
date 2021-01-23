/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 13:11:56 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/23 17:40:13 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIRE_HPP
# define FIRE_HPP

# include "AMateria.hpp"

class Fire : public AMateria
{
	public:

	Fire(void) : AMateria("fire") { }
	~Fire(void) { }

	void use(ICharacter& target);
	AMateria* clone() const { return (new Fire()); }
};

#endif
