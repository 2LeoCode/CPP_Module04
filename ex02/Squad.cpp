/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 16:29:41 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/22 17:48:54 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::~Squad(void)
{
	ISpaceMarineList * head = _soldiers;

	while (head)
	{
		_soldiers = head;
		head = head->next;
		delete _soldiers->current;
		delete _soldiers;
	}
	_soldiers = nullptr;
}

int Squad::getCount(void) const
{
	ISpaceMarineList * tmp = _soldiers;
	int count = 0;

	while (tmp)
		count++, tmp = tmp->next;
	return (count);
}

ISpaceMarine * Squad::getUnit(int i) const
{
	ISpaceMarineList *tmp = _soldiers;

	while (i--)
		if (tmp)
			tmp = tmp->next;
	if (tmp)
		return (tmp->current);
	std::cout << "Error: unit " << i << " not found" << std::endl;
	return (nullptr);
}

int Squad::push(ISpaceMarine * soldier)
{
	if (!soldier)
		return (-1);
	ISpaceMarineList * newSoldier = new ISpaceMarineList;
	int i = 1;

	newSoldier->current = soldier;
	newSoldier->next = nullptr;
	if (!_soldiers)
		_soldiers = newSoldier;
	else
	{
		ISpaceMarineList * tmp = _soldiers;
		while (i++ && tmp->next)
		{
			if (tmp->current == soldier)
				goto exist;
			tmp = tmp->next;
		}
		if (tmp->current == soldier)
			goto exist;
		tmp->next = newSoldier;
	}
	return (i);
	exist:

	delete newSoldier;
	std::cout << "This soldier is already in the squad" << std::endl;
	return (-1);
}
