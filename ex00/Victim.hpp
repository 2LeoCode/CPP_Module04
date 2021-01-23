/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 21:19:42 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/21 23:03:55 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
	public:

	Victim(std::string name);
	Victim(const Victim& src);
	virtual ~Victim(void);

	void operator=(const Victim& src);

	inline std::string getName(void) const { return (_name); }
	virtual inline void getPolymorphed(void) const { std::cout << _name << " has been turned into a cute little sheep!" << std::endl; }


	protected:

	std::string _name;
};

std::ostream& operator<<(std::ostream &out, const Victim &src);

#endif
