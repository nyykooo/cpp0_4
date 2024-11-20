/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:39:51 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/20 19:00:35 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << _type <<" is a beatiful kitten" << std::endl;
}

Dog::Dog ( const Dog &copy ) : Animal(copy)
{
	if (this != &copy)
	{
		std::cout << "Copy constructor called" << std::endl;
		*this = copy;
	}
}

Dog&	Dog::operator=(Dog const &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy) {
		this->_type = copy._type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << _type << " is feeling tired" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Dog: Au Au" << std::endl;
}
