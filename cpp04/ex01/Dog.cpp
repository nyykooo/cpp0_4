/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:39:51 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/09 18:44:08 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << _type << " is a beatiful puppy" << std::endl;
}

Dog::Dog ( const Dog &copy )
{
		std::cout << "Copy constructor called" << std::endl;
		_type = copy._type;
		_brain = new Brain(*copy._brain);
}

Dog&	Dog::operator=(Dog const &copy) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy) {
		_type = copy._type;
		delete _brain; // delete the old brain and allocate a new one equals to the copy's brain, prevents shallow copy
		_brain = new Brain(*copy._brain);
	}
	return *this;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << _type << " is feeling tired" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Dog: Au Au" << std::endl;
}

Brain*	Dog::getBrain() const
{
	return _brain;
}
