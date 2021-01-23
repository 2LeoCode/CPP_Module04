/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 21:24:03 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/22 21:33:58 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include "A.hpp"

class A;

class B
{
	public:

	B(void) { }
	~B(void) { }

	void interactA(A & a) { /* Do something with A */ }
};

#endif