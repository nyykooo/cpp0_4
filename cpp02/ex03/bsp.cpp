/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:33:59 by ncampbel          #+#    #+#             */
/*   Updated: 2024/10/29 17:38:38 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	getArea(Point a, Point b, Point c)
{
	Fixed area = ((a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - b.getY()))) / 2;
	return (area);
}

bool	ft_verify_points(Point a, Point b, Point c, Point point)
{
	if (a.getX() == b.getX() && a.getY() == b.getY() || \
	a.getX() == c.getX() && a.getY() == c.getY() || \
	b.getX() == c.getX() && b.getY() == c.getY())
		return (false);
	if (point.getX() == a.getX() && point.getY() == a.getY() || \
	point.getX() == b.getX() && point.getY() == b.getY() || \
	point.getX() == c.getX() && point.getY() == c.getY())
		return (false);

	if (getArea(a, b, point) == 0 || getArea(a, c, point) == 0 || \
	getArea(b, c, point) == 0)
		return (false);
	return (true);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	if (!ft_verify_points(a, b, c, point))
		return (false);
	
	Fixed areaABC = getArea(a, b, c);
	Fixed areaPBC = getArea(point, b, c);
	Fixed areaAPC = getArea(a, point, c);
	Fixed areaABP = getArea(a, b, point);

	std::cout << "AREAS" << std::endl;

	std::cout << "Area ABC: " << areaABC << std::endl;
	std::cout << "Area PBC: " << areaPBC << std::endl;
	std::cout << "Area APC: " << areaAPC << std::endl;
	std::cout << "Area ABP: " << areaABP << std::endl;

	if (areaABC == areaPBC + areaAPC + areaABP)
		return (true);
	else
		return (false);
}
