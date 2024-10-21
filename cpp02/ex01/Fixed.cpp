/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:08:18 by ncampbel          #+#    #+#             */
/*   Updated: 2024/10/01 17:09:11 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPoint = 0;
}

Fixed::Fixed ( const Fixed &fixed )
{
	if (this != &fixed)
	{
		std::cout << "Copy constructor called" << std::endl;
		*this = fixed;
	}
}

Fixed&	Fixed::operator=(Fixed const &fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed) {
		this->_fixedPoint = fixed.getRawBits();
	}
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const number) {
	std::cout << "Int constructor called" << std::endl;
	_fixedPoint = number << _bits;
}

Fixed::Fixed(float const floatNumber) {
	std::cout << "Float constructor called" << std::endl;
	_fixedPoint = (int)roundf(floatNumber * (1 << _bits));
}

int	Fixed::getRawBits( void ) const
{
	return (this->_fixedPoint);
}

void Fixed::setRawBits( int const raw )
{
	this->_fixedPoint = raw;
}

int	Fixed::toInt( void ) const
{
	return (_fixedPoint >> _bits);
}

float Fixed::toFloat( void ) const
{
	return ((float)_fixedPoint / (1 << _bits));
}

std::ostream& operator<<(std::ostream& outputStream, const Fixed &fixed)
{
	outputStream << fixed.toFloat();
	return outputStream; 
}