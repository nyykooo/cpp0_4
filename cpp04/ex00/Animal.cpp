/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:39:51 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/07 18:05:45 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{
	std::cout << _type << " is born healthy" << std::endl;
}

Animal::Animal ( const Animal &copy )
{
	if (this != &copy)
	{
		std::cout << "Copy constructor called" << std::endl;
		*this = copy;
	}
}

Animal&	Animal::operator=(Animal const &copy) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy) {
		*this = copy;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << _type << " is resting in peace now" << std::endl;
}

std::string Animal::getType()
{
	return (this->_type);
}