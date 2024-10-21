/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:08:18 by ncampbel          #+#    #+#             */
/*   Updated: 2024/10/01 17:18:50 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_fixedPoint = 0;
}

Fixed::Fixed ( const Fixed &fixed )
{
	if (this != &fixed)
	{
		*this = fixed;
	}
}

Fixed&	Fixed::operator=(Fixed const &fixed) {
	if (this != &fixed) {
		this->_fixedPoint = fixed.getRawBits();
	}
	return *this;
}

Fixed::~Fixed()
{
}

Fixed::Fixed( const int number )
{
	this->_fixedPoint = number << this->_bits;
}

Fixed::Fixed( const float floatNumber )
{
	this->_fixedPoint = roundf(floatNumber * (1 << this->_bits));
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
	return (this->_fixedPoint >> this->_bits);
}

float Fixed::toFloat( void ) const
{
	return ((float)this->_fixedPoint / (1 << this->_bits));
}

// ----------------- OPERATIONS -----------------

Fixed	Fixed::operator+(const Fixed& number) const
{
	Fixed res;
	res.setRawBits(res.getRawBits() + number.getRawBits());
	return (res);
}

Fixed	Fixed::operator-(const Fixed& number) const
{
	Fixed res;
	res.setRawBits(res.getRawBits() - number.getRawBits());
	return (res);
}

Fixed	Fixed::operator*(const Fixed& number) const
{
	Fixed res;
	res.setRawBits(this->getRawBits() * number.getRawBits() >> this->_bits);
	return (res);
}

Fixed	Fixed::operator/(const Fixed& number) const
{
	Fixed res;
	res.setRawBits(this->getRawBits() / number.getRawBits() << this->_bits);
	return (res);
}


// ----------------- COMPARISON -----------------

bool	Fixed::operator<(const Fixed& number) const 
{
	return (this->getRawBits() < number.getRawBits());
}

bool	Fixed::operator<=(const Fixed& number) const 
{
	return (this->getRawBits() <= number.getRawBits());
}

bool	Fixed::operator>(const Fixed& number) const 
{
	return (this->getRawBits() > number.getRawBits());
}

bool	Fixed::operator>=(const Fixed& number) const 
{
	return (this->getRawBits() >= number.getRawBits());
}

bool	Fixed::operator==(const Fixed& number) const 
{
	return (this->getRawBits() == number.getRawBits());
}

bool	Fixed::operator!=(const Fixed& number) const 
{
	return (this->getRawBits() != number.getRawBits());
}

// ----------------- INCREMENT/DECREMENT -----------------

Fixed	Fixed::operator++()
{
	this->_fixedPoint++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	this->_fixedPoint++;
	return (temp);
}

Fixed	Fixed::operator--()
{
	this->_fixedPoint--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	this->_fixedPoint--;
	return (temp);
}

// ----------------- MIN/MAX -----------------

Fixed& Fixed::min(Fixed& n1, Fixed&n2)
{
	return (n1 < n2 ? n1 : n2);
}

const Fixed& Fixed::min(const Fixed& n1, const Fixed&n2)
{
	return (n1 < n2 ? n1 : n2);
}

Fixed& Fixed::max(Fixed& n1, Fixed&n2)
{
	return (n1 > n2 ? n1 : n2);
}

const Fixed& Fixed::max(const Fixed& n1, const Fixed&n2)
{
	return (n1 > n2 ? n1 : n2);
}

// ----------------- OUTPUT STREAM -----------------

std::ostream& operator<<(std::ostream& outputStream, const Fixed &fixed)
{
	outputStream << fixed.toFloat();
	return outputStream; 
}