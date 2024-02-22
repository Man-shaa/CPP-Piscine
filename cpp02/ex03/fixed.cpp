/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:04:12 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/29 16:02:59 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed(void) : _nb(0)
{
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed::Fixed(const int n) : _nb(n << _bits)
{
	return ;
}

Fixed::Fixed(const float n) : _nb(roundf(n * (1 << _bits)))
{
	return ;
}

Fixed::Fixed(const Fixed &toCopy)
{
	*this = toCopy;
	return ;
}

int Fixed::getRawBits(void) const
{
	return (_nb);
}

void	Fixed::setRawBits(int const raw)
{
	_nb = raw;
}

float	Fixed::toFloat(void) const
{
	return (float(this->getRawBits()) / (1 << _bits));
}

int	Fixed::toInt(void) const
{
	return (_nb >> _bits);
}
