/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:39:51 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/20 19:01:29 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	std::cout << _type << " is born healthy" << std::endl;
}

WrongAnimal::WrongAnimal ( const WrongAnimal &copy )
{
	if (this != &copy)
	{
		std::cout << "Copy constructor called" << std::endl;
		*this = copy;
	}
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const &copy) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy) {
		this->_type = copy._type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << _type << " is resting now" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal: pei" << std::endl;
}