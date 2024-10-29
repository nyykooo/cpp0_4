/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:08:21 by ncampbel          #+#    #+#             */
/*   Updated: 2024/10/29 17:18:23 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	Point a(0, 0);
	Point b(4, 0);
	Point c(0, 4);
	Point point1(2, 2);
	Point point2(1, 1);
	Point point3(0, 0);
	Point point4(4, 0);
	Point point5(0, 4);
	Point point6(5,6);

	if (bsp(a, b, c, point1))
		std::cout << "Point 1 is inside the triangle." << std::endl;
	else
		std::cout << "Point 1 is outside the triangle." << std::endl;
	
	if (bsp(a, b, c, point2))
		std::cout << "Point 2 is inside the triangle." << std::endl;
	else
		std::cout << "Point 2 is outside the triangle." << std::endl;

	if (bsp(a, b, c, point3))
		std::cout << "Point 3 is inside the triangle." << std::endl;
	else
		std::cout << "Point 3 is outside the triangle." << std::endl;
	
	if (bsp(a, b, c, point4))
		std::cout << "Point 4 is inside the triangle." << std::endl;
	else
		std::cout << "Point 4 is outside the triangle." << std::endl;

	if (bsp(a, b, c, point5))
		std::cout << "Point 5 is inside the triangle." << std::endl;
	else
		std::cout << "Point 5 is outside the triangle." << std::endl;

	if (bsp(a, b, c, point6))
		std::cout << "Point 6 is inside the triangle." << std::endl;
	else
		std::cout << "Point 6 is outside the triangle." << std::endl;
	
	return 0;
}