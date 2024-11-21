/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 23:22:11 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/21 23:47:19 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(Cure const & copy) : AMateria(copy) {}

Cure & Cure::operator=(Cure const & copy)
{
	if (this != &copy)
	{
	}
	return (*this);
}

Cure::~Cure() {}

AMateria * Cure::clone() const
{
	AMateria *clone = new Cure(*this);
	return (clone);
}

void Cure::use(ICharacter& target)
{
	std::cout << "🩹 heals " << target.getName() << "’s wounds 🩹" << std::endl;
}
