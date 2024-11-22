/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 23:23:05 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/22 00:56:08 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice() : AMateria("ice") {
	_type = "ice";
}

Ice::Ice(Ice const & copy) : AMateria(copy) {}

Ice & Ice::operator=(Ice const & copy)
{
	if (this != &copy)
	{
		_type = copy._type;
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
	std::cout << "❄️  shoots an ice bolt at " << target.getName() << "  ❄️" << std::endl;
}
