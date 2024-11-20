/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:39:51 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/20 23:45:12 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << ANSI_BLUE << "🐕 " + _type <<" is a beatiful puppy 🐕" << ANSI_RESET << std::endl;
}

Dog::Dog ( const Dog &copy ) : Animal(copy)
{
	if (this != &copy)
	{
		std::cout << ANSI_BLUE << "🐕 Copy constructor called 🐕" << ANSI_RESET << std::endl;
		*this = copy;
	}
}

Dog&	Dog::operator=(Dog const &copy)
{
	std::cout << ANSI_BLUE << "🐕 Copy assignment operator called 🐕" << ANSI_RESET << std::endl;
	if (this != &copy) {
		this->_type = copy._type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << ANSI_BLUE << "🐕 " + _type << " is feeling tired 🐕" << ANSI_RESET << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "🐕 Dog: Au Au 🐕" << std::endl;
}
