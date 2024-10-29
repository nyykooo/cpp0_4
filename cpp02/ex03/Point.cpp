/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:34:48 by ncampbel          #+#    #+#             */
/*   Updated: 2024/10/29 17:08:48 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(const Point &point) : _x(point._x), _y(point._y)
{
}

Point::Point(const int x, const int y) : _x(x), _y(y)
{
}

Point::~Point()
{
}

Point& Point::operator=(const Point &point)
{
	if (this == &point)
		return (*this);
	return (*this);
}

Fixed Point::getX() const
{
	return (_x);
}

Fixed Point::getY() const
{
	return (_y);
}