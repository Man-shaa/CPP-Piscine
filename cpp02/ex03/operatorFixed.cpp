/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operatorFixed.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:42:12 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/29 16:56:37 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed	&Fixed::operator = (const Fixed &toCopy)
{
	if (this != &toCopy)
		_nb = toCopy.getRawBits();
	return (*this);
}

Fixed	Fixed::operator + (const Fixed &fixed) const
{
	return (this->toFloat() + fixed.toFloat());
}

Fixed	Fixed::operator - (const Fixed &fixed) const
{
	return (this->toFloat() - fixed.toFloat());
}

Fixed	Fixed::operator / (const Fixed &fixed) const
{
	return (this->toFloat() / fixed.toFloat());
}

Fixed	Fixed::operator * (const Fixed &fixed) const
{
	return (this->toFloat() * fixed.toFloat());
}

bool	Fixed::operator < (const Fixed &fixed) const
{
	if (this->toFloat() < fixed.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator <= (const Fixed &fixed) const
{
	if (this->toFloat() <= fixed.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator > (const Fixed &fixed) const
{
	if (this->toFloat() > fixed.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator >= (const Fixed &fixed) const
{
	if (this->toFloat() >= fixed.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator == (const Fixed &fixed) const
{
	if (this->toFloat() == fixed.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator != (const Fixed &fixed) const
{
	if (this->toFloat() != fixed.toFloat())
		return (true);
	return (false);
}

Fixed	&Fixed::operator ++ (void)
{
	this->_nb++;
	return (*this);
}

Fixed	Fixed::operator ++ (int)
{
	Fixed	save = *this;
	this->_nb++;
	return (save);
}

Fixed	&Fixed::operator -- (void)
{
	this->_nb--;
	return (*this);
}

Fixed	Fixed::operator -- (int)
{
	Fixed	save = *this;
	this->_nb--;
	return (save);
}

Fixed	Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed	Fixed::min(Fixed const &a, Fixed const &b){
	if (a < b)
		return (a);
	return (b);
}

Fixed	Fixed::max(Fixed const &a, Fixed const &b){
	if (a > b)
		return (a);
	return (b);
}

std::ostream	&operator << (std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}
