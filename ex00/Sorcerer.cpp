/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 21:15:33 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/21 22:37:07 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title << " is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& src) : _name(src._name), _title(src._title)
{
	std::cout << _name << ", " << _title << " is born!" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << _name << " is dead. Consequences will never be the same!" << std::endl;
}

void Sorcerer::operator=(const Sorcerer& src)
{
	_name = src._name;
	_title = src._title;
}

std::ostream& operator<<(std::ostream &out, const Sorcerer &src)
{
	out << "I am " << ((Sorcerer&)src).getName() << ", " << ((Sorcerer&)src).getTitle() << ", and I like ponies!" << std::endl;
	return (out);
}
