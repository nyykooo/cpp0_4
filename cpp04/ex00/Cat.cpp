/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:39:51 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/20 19:00:55 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << _type <<" is a beatiful puppy" << std::endl;
}

Cat::Cat ( const Cat &copy ) : Animal(copy)
{
	if (this != &copy)
	{
		std::cout << "Copy constructor called" << std::endl;
		*this = copy;
	}
}

Cat&	Cat::operator=(Cat const &copy) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy) {
		this->_type = copy._type;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << _type << " is feeling tired" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Cat: Meow meow" << std::endl;
}
