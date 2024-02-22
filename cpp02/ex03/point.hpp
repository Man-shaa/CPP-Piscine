/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 14:34:37 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/29 17:28:09 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "fixed.hpp"
# include <iostream>

class	Point
{
	private:
		const Fixed	_x;
		const Fixed	_y;

	public:
		Point(void);
		Point(float const a, float const b);
		~Point(void);

		Fixed	getX(void) const;
		Fixed	getY(void) const;
		Point(const Point &toCopy);
		Point &operator = (const Point &toCopy);
		bool	bsp(Point const a, Point const b, Point const c, Point const point);
};

std::ostream	&operator << (std::ostream &out, const Point &point);

#endif
