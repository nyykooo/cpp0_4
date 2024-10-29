/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:08:14 by ncampbel          #+#    #+#             */
/*   Updated: 2024/10/01 16:59:11 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
#include <cmath>

class Fixed
{
	private:
		static const int	_bits = 8;
		int					_fixedPoint;
	public:
		Fixed();
		~Fixed();
		Fixed( const int number);
		Fixed( const Fixed &fixed );
		Fixed( const float floatNumber);
		Fixed&	operator=(Fixed const &fixed);

		int 	toInt( void ) const;
		float 	toFloat( void ) const;
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		Fixed operator+(const Fixed& number) const;
		Fixed operator-(const Fixed& number) const;
		Fixed operator*(const Fixed& number) const;
		Fixed operator/(const Fixed& number) const;
		
		bool operator<(const Fixed& number) const;
		bool operator<=(const Fixed& number) const;
		bool operator>(const Fixed& number) const;
		bool operator>=(const Fixed& number) const;
		bool operator==(const Fixed& number) const;
		bool operator!=(const Fixed& number) const;

		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);

		static Fixed& min(Fixed& n1, Fixed& n2);
		static const Fixed& min(const Fixed& n1, const Fixed& n2);
		static Fixed& max(Fixed& n1, Fixed& n2);
		static const Fixed& max(const Fixed& n1, const Fixed& n2);
};

std::ostream& operator<<(std::ostream& outputStream, const Fixed &fixed);

#endif