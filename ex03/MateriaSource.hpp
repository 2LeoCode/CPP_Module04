/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 19:36:59 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/23 17:46:05 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:

	MateriaSource(void) : _materias() { }
	MateriaSource(const MateriaSource& src) : _materias() { for (int i = 0; (i < 4) && src._materias[i]; i++) _materias[i] = src._materias[i]->clone(); }
	~MateriaSource(void) { for (int i = 0; (i < 4) && _materias[i]; i++) { delete _materias[i]; _materias[i] = nullptr; } }

	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);


	private:

	AMateria * _materias[4];
};

#endif
