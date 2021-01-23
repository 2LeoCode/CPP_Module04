/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 00:22:33 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/22 00:23:34 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:

	SuperMutant(void) : Enemy(170, "Super Mutant") { std::cout << "Gaaah. Me want smash heads!" << std::endl; }
	~SuperMutant(void) { std::cout << "Aaargh..." << std::endl; }

	virtual void takeDamage(int amount);
};

#endif
