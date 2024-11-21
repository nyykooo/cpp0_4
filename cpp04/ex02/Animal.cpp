/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:39:51 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/21 00:42:27 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes.hpp"

AAnimal::AAnimal(): _type("Animal")
{
	std::cout << ANSI_RED << "🙊 " + _type << " is born healthy 🙊" << ANSI_RESET << std::endl;
}

AAnimal::AAnimal ( const AAnimal &copy )
{
	if (this != &copy)
	{
		std::cout << ANSI_RED << "🙊 Copy constructor called 🙊" << ANSI_RESET << std::endl;
		*this = copy;
	}
}

AAnimal&	AAnimal::operator=(AAnimal const &copy) {
	std::cout << ANSI_RED << "🙊 Copy assignment operator called 🙊" << ANSI_RESET << std::endl;
	if (this != &copy) {
		this->_type = copy._type;
	}
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << ANSI_RED << "🙊 " + _type << " is resting now 🙊" << ANSI_RESET << std::endl;
}

std::string AAnimal::getType() const
{
	return (this->_type);
}
