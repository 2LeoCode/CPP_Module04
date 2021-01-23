/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 18:32:53 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/22 22:00:32 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "Character.hpp"

class ICharacter;

class AMateria
{
	public:

	AMateria(std::string const & type) : _type(type), _xp(0) { }
	AMateria(const AMateria & src) : _type(src._type), _xp(src._xp) { }
	virtual ~AMateria() { }

	inline std::string const & getType() const { return (_type); }
	inline unsigned int getXP() const { return (_xp); }
	virtual void use(ICharacter & target);
	virtual AMateria* clone() const = 0;


	private:

	std::string _type;
	unsigned int _xp;
};

#endif
