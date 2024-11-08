/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:08:21 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/08 21:10:43 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	
	a = Fixed( 1234.4321f );
	
	std::cout << std::endl;
	
	std::cout << "[Fixed]" << std::endl;
	std::cout << "Fixed a is: " << a << std::endl;
	std::cout << "Fixed b is: " << b << std::endl;
	std::cout << "Fixed c is: " << c << std::endl;
	std::cout << "Fixed d is: " << d << std::endl;
	
	std::cout << std::endl << "[toInt]:" << std::endl;
	std::cout << "Integer a is: " << a.toInt() << std::endl;
	std::cout << "Integer b is: " << b.toInt() << std::endl;
	std::cout << "Integer c is: " << c.toInt() << std::endl;
	std::cout << "Integer d is: " << d.toInt() << std::endl;

	std::cout << std::endl << "[toFloat]:" << std::endl;
	std::cout << "Float a is: " << a.toFloat() << std::endl;
	std::cout << "Float b is: " << b.toFloat() << std::endl;
	std::cout << "Float c is: " << c.toFloat() << std::endl;
	std::cout << "Float d is: " << d.toFloat() << std::endl;
	
	std::cout << std::endl;
	return 0;
}