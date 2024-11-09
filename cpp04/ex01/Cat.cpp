/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:39:51 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/09 18:44:22 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << _type <<" is a beatiful kitten" << std::endl;
}

Cat::Cat ( const Cat &copy )
{
	std::cout << "Copy constructor called" << std::endl;
	_type = copy._type;
	_brain = new Brain(*copy._brain);	
}

Cat&	Cat::operator=(Cat const &copy) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy) {
		_type = copy._type;
		delete _brain; // delete the old brain and allocate a new one equals to the copy's brain, prevents shallow copy
		_brain = new Brain(*copy._brain);
	}
	return *this;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << _type << " is feeling tired" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Cat: Meow meow" << std::endl;
}

Brain*	Cat::getBrain() const
{
	return _brain;
}
