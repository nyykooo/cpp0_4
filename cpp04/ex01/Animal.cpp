/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:39:51 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/20 23:58:08 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes.hpp"

Animal::Animal(): _type("Animal")
{
	std::cout << ANSI_RED << "🙊 " + _type << " is born healthy 🙊" << ANSI_RESET << std::endl;
}

Animal::Animal ( const Animal &copy )
{
	if (this != &copy)
	{
		std::cout << ANSI_RED << "🙊 Copy constructor called 🙊" << ANSI_RESET << std::endl;
		*this = copy;
	}
}

Animal&	Animal::operator=(Animal const &copy) {
	std::cout << ANSI_RED << "🙊 Copy assignment operator called 🙊" << ANSI_RESET << std::endl;
	if (this != &copy) {
		this->_type = copy._type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << ANSI_RED << "🙊 " + _type << " is resting now 🙊" << ANSI_RESET << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound() const
{
	std::cout << "🙊 Animal: pipipi popopo 🙊" << std::endl;
}