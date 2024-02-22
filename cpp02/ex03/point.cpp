/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 14:34:22 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/18 18:12:32 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	return ;
}

Point::Point(float const a, float const b) : _x(a), _y(b)
{
	return ;
}

Point::~Point(void)
{
	return ;
}

Point::Point(const Point &toCopy) : _x(toCopy._x), _y(toCopy._y) 
{
	return ;
}

Fixed	Point::getX(void) const
{
	return (_x);
}

Fixed	Point::getY(void) const
{
	return (_y);
}

bool	Point::bsp(Point const a, Point const b, Point const c, Point const point)
{
	float d1 = ((point.getX().toFloat() - b.getX().toFloat())
		* (a.getY().toFloat() - b.getY().toFloat()) - (a.getX().toFloat() - b.getX().toFloat())
		* (point.getY().toFloat() - b.getY().toFloat()));
	float d2 = ((point.getX().toFloat() - c.getX().toFloat())
		* (b.getY().toFloat() - c.getY().toFloat()) - (b.getX().toFloat() - c.getX().toFloat())
		* (point.getY().toFloat() - c.getY().toFloat()));
	float d3 = ((point.getX().toFloat() - a.getX().toFloat())
		* (c.getY().toFloat() - a.getY().toFloat()) - (c.getX().toFloat() - a.getX().toFloat())
		* (point.getY().toFloat() - a.getY().toFloat()));

	bool negativ = (d1 < 0) || (d2 < 0) || (d3 < 0);
	bool positiv = (d1 > 0) || (d2 > 0) || (d3 > 0);

	if ((negativ && !positiv) || (!negativ && positiv))
		return (true);
	else
		return (false);
}
