/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Goblin.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 22:40:02 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/21 22:47:03 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Goblin.class.hpp"

Goblin::Goblin(std::string name) : Peon(name)
{
	std::cout << "Croch Croch!" << std::endl;
}

Goblin::Goblin(const Goblin& src) : Peon(src._name)
{
	std::cout << "Croch Croch!" << std::endl;
}

Goblin::~Goblin(void)
{
	std::cout << "Croch Croch Croch!" << std::endl;
}

void Goblin::operator=(const Goblin& src)
{
	_name = src._name;
}
