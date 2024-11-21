/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:39:51 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/21 00:09:43 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << ANSI_BLUE << "🐕 " + _type <<" is a beatiful puppy 🐕" << ANSI_RESET << std::endl;
	_brain = new Brain();
}

Dog::Dog ( const Dog &copy ) : Animal(copy)
{
		_type = copy._type;
		std::cout << ANSI_BLUE << "🐕 Copy constructor called 🐕" << ANSI_RESET << std::endl;
		_brain = new Brain(*copy._brain);
}

Dog&	Dog::operator=(Dog const &copy) 
{
	if (this != &copy) {
		_type = copy._type;
		std::cout << ANSI_BLUE << "🐕 Copy assignment operator called 🐕" << ANSI_RESET << std::endl;
		delete _brain; // delete the old brain and allocate a new one equals to the copy's brain, prevents shallow copy
		_brain = new Brain(*copy._brain);
	}
	return *this;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << ANSI_BLUE << "🐕 " + _type << " is feeling tired 🐕" << ANSI_RESET << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "🐕 Dog: Au Au 🐕" << std::endl;
}

Brain*	Dog::getBrain() const
{
	return _brain;
}
