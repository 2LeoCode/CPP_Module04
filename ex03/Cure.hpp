/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 18:58:21 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/23 17:40:06 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:

	Cure(void) : AMateria("cure") { }
	~Cure(void) { }

	void use(ICharacter& target);
	virtual AMateria* clone() const { return (new Cure()); }
};

#endif
