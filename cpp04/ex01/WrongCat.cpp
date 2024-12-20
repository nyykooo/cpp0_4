/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:39:51 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/20 23:57:02 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << _type <<" is a beatiful puppy" << std::endl;
}

WrongCat::WrongCat ( const WrongCat &copy ) : WrongAnimal(copy)
{
	if (this != &copy)
	{
		std::cout << "Copy constructor called" << std::endl;
		*this = copy;
	}
}

WrongCat&	WrongCat::operator=(WrongCat const &copy) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy) {
		*this = copy;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << _type << " is feeling tired" << std::endl;
}

