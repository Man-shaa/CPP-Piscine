/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operatorPoint.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:57:29 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/29 17:23:14 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.hpp"

Point	&Point::operator = (const Point &toCopy)
{
	if (this == &toCopy)
		return (*this);
	this->~Point();
	new (this) Point(toCopy._x.toFloat(), toCopy._y.toFloat());
	return (*this);
}

std::ostream	&operator << (std::ostream &out, const Point &point)
{
	out << point.getX() << " ; " << point.getY() << std::endl;
	return (out);
}
