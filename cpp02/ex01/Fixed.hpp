/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:08:14 by ncampbel          #+#    #+#             */
/*   Updated: 2024/10/01 16:59:08 by ncampbel         ###   ########.fr       */
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
};

std::ostream& operator<<(std::ostream& outputStream, const Fixed &fixed);

#endif