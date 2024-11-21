/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 22:57:55 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/21 23:47:07 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"


AMateria::AMateria() : _type("Default")
{
}

AMateria::AMateria(AMateria const & copy)
{
	*this = copy;
}

AMateria & AMateria::operator=(AMateria const & copy)
{
	if (this != &copy)
	{
	}
	return (*this);
}

AMateria::~AMateria()
{
}

AMateria::AMateria(std::string const & type) : _type(type)
{
}

std::string const & AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
