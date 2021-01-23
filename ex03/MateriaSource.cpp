/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 19:36:27 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/23 13:10:50 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

void MateriaSource::learnMateria(AMateria * m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
		if (!_materias[i])
		{
			_materias[i] = m;
			return ;
		}
		else if (_materias[i]->getType() == m->getType())
		{
			std::cout << "Materia `" << m->getType() << "` already learned" << std::endl;
			return ;
		}
	std::cout << "Can't learn more materias" << std::endl;
}

AMateria * MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; (i < 4) && _materias[i]; i++)
		if (_materias[i]->getType() == type)
			return (_materias[i]->clone());
	std::cout << "Unknown materia type `" << type << '`' << std::endl;
	return (nullptr);
}
