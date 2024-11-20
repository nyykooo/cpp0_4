/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:39:51 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/20 23:43:25 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "🐈 " << ANSI_GREEN << _type <<" is a beatiful kitten" << ANSI_RESET << " 🐈" << std::endl;
}

Cat::Cat ( const Cat &copy ) : Animal(copy)
{
	if (this != &copy)
	{
		std::cout << "🐈 " << ANSI_GREEN << "Copy constructor called" << ANSI_RESET << " 🐈" << std::endl;
		*this = copy;
	}
}

Cat&	Cat::operator=(Cat const &copy) 
{
	std::cout << "🐈 " << ANSI_GREEN << "Copy assignment operator called" << ANSI_RESET << " 🐈" << std::endl;
	if (this != &copy) {
		this->_type = copy._type;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "🐈 " << ANSI_GREEN << _type << " is feeling tired" << ANSI_RESET << " 🐈" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "🐈 Cat: Meow meow 🐈" << std::endl;
}
