/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:08:18 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/05 18:50:24 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
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
		setRawBits(fixed.getRawBits());
	}
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const number) {
	std::cout << "Int constructor called" << std::endl;
	setRawBits(number << _bits);
}

Fixed::Fixed(float const floatNumber) {
	std::cout << "Float constructor called" << std::endl;
	setRawBits((int)roundf(floatNumber * (1 << _bits)));
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
	return (getRawBits() >> _bits);
}

float Fixed::toFloat( void ) const
{
	return ((float)getRawBits() / (1 << _bits));
}

std::ostream& operator<<(std::ostream& outputStream, const Fixed &fixed)
{
	outputStream << fixed.toFloat();
	return outputStream; 
}