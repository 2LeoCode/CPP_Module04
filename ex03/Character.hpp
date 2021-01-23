/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 19:12:13 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/23 17:11:59 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:

	Character(std::string name) : _name(name), _inv() { }
	Character(const Character& src);
	~Character(void);

	void operator=(const Character& src);

	virtual inline std::string const & getName(void) const { return (_name); }
	virtual void equip(AMateria* m);
	virtual void use(int idx, ICharacter& target);
	virtual void unequip(int idx);
	AMateria * getInv(int idx);


	private:

	std::string _name;
	AMateria *_inv[4];
};

#endif
