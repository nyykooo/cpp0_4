/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:08:21 by ncampbel          #+#    #+#             */
/*   Updated: 2024/10/01 17:30:04 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed		a;
	Fixed		c( Fixed(40) / Fixed(2.0f) );
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const d(10);

	std::cout << a << "\t\t\tequals to a at the beggining - 1" << std::endl;
	std::cout << ++a << "\t\tequals to a at the pre increment - 2" << std::endl;
	std::cout << a << "\t\tequals to a after the pre increment - 3" << std::endl;
	std::cout << a++ << "\t\tequals to a at the pos increment - 4" << std::endl;
	std::cout << a++ << "\t\tequals to a at the pos increment - 5" << std::endl;
	std::cout << --a << "\t\tequals to a at the pre decrement - 6" << std::endl;
	std::cout << a << "\t\tequals to a after the pre increment - 7" << std::endl;
	
	std::cout << "---------------------------------------------" << std::endl;

	std::cout << b << "\t\t\tequals to b after multiplication - 8" << std::endl;
	std::cout << c << "\t\t\tequals to c after division - 9" << std::endl;
	std::cout << d << "\t\t\tequals to d after multiplication - 10" << std::endl;
	
	std::cout << "---------------------------------------------" << std::endl;
	
	std::cout << Fixed::max( a, c ) << "\t\t\tis the max between a and c - 11" << std::endl;
	std::cout << Fixed::max( b, d ) << "\t\t\tis the max between b and d - 12" << std::endl;
	std::cout << Fixed::min( a, c ) << "\t\tis the max between a and c - 13" << std::endl;
	std::cout << Fixed::min( b, d ) << "\t\t\tis the max between b and d - 14" << std::endl;
	return 0;
}