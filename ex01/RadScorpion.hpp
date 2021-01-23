/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 00:14:23 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/22 00:17:10 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:

	RadScorpion(void) : Enemy(80, "RadScorpion") { std::cout << "* click click click *" << std::endl; }
	~RadScorpion(void) { std::cout << "* SPROTCH *" << std::endl; }
};

#endif
