/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:39:51 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/21 00:09:16 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes.hpp"

Cat::Cat() : Animal()
{
	_type = "Cat";
	std::cout << "🐈 " << ANSI_GREEN << _type <<" is a beatiful kitten" << ANSI_RESET << " 🐈" << std::endl;
	_brain = new Brain();
}

Cat::Cat ( const Cat &copy ) : Animal(copy)
{
		std::cout << "🐈 " << ANSI_GREEN << "Copy constructor called" << ANSI_RESET << " 🐈" << std::endl;
	_type = copy._type;
	_brain = new Brain(*copy._brain);	
}

Cat&	Cat::operator=(Cat const &copy) 
{
	std::cout << "🐈 " << ANSI_GREEN << "Copy assignment operator called" << ANSI_RESET << " 🐈" << std::endl;
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
	std::cout << "🐈 " << ANSI_GREEN << _type << " is feeling tired" << ANSI_RESET << " 🐈" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "🐈 Cat: Meow meow 🐈" << std::endl;
}

Brain*	Cat::getBrain() const
{
	return _brain;
}
