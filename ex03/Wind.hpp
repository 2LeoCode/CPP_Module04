/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wind.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 13:20:11 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/23 16:58:30 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WIND_HPP
# define WIND_HPP

# include "AMateria.hpp"

class Wind : public AMateria
{
	public:

	Wind(void) : AMateria("wind") { }
	~Wind(void) { }

	void use(ICharacter& target);
	AMateria* clone() const { return (new Wind()); }
};

#endif
