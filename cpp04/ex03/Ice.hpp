/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:13:58 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/21 19:50:35 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const & copy);
		Ice & operator=(Ice const & copy);
		~Ice();

		AMateria * clone() const;
		void use(ICharacter& target);
};

Ice::Ice() : AMateria("ice") {}

Ice::Ice(Ice const & copy) : AMateria(copy) {}

Ice & Ice::operator=(Ice const & copy)
{
	if (this != &copy)
	{
	}
	return (*this);
}

Ice::~Ice() {}

AMateria * Ice::clone() const
{
	AMateria *clone = new Ice(*this);
	return (clone);
}

void Ice::use(ICharacter& target)
{
	std::cout << "❄️ shoots an ice bolt at " << target.getName() << " ❄️" << std::endl;
}

#endif