/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:02:40 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/21 19:50:25 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const & copy);
		Cure & operator=(Cure const & copy);
		~Cure();

		AMateria * clone() const;
		void use(ICharacter& target);
};

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


#endif