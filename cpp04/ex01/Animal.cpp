/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:39:51 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/09 18:34:25 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{
	std::cout << _type << " is born healthy" << std::endl;
}

Animal::Animal ( const Animal &copy )
{
	std::cout << "Copy constructor called" << std::endl;
	_type = copy._type;
}

Animal&	Animal::operator=(Animal const &copy) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy) {
		_type = copy._type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << _type << " is resting now" << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound() const
{
	std::cout << "Animal: pipipi popopo" << std::endl;
}