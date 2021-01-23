/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 21:21:14 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/22 21:34:04 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include "B.hpp"

class B;

class A
{
	public:

	A(void) { }
	~A(void) { }

	void interactB(B & b) { /* Do something with B */ }
};

#endif
