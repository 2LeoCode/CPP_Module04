/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Goblin.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 22:40:05 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/21 22:45:11 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GOBLIN_HPP
# define GOBLIN_HPP

# include "Peon.hpp"

class Goblin : public Peon
{
	public:

	Goblin(std::string name);
	Goblin(const Goblin& src);
	virtual ~Goblin(void);

	void operator=(const Goblin& src);

	virtual inline void getPolymorphed(void) const { std::cout << _name << " got turned into a turtle!" << std::endl; }
};

#endif
