/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:53:29 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/29 16:56:35 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int					_nb;
		static const int	_bits = 8;

	public:
		Fixed(void);
		Fixed(const int n);
		Fixed(const float f);
		Fixed(const Fixed &toCopy);
		~Fixed(void);

		Fixed&	operator = (const Fixed &toCopy);
		Fixed	operator + (const Fixed &fixed) const;
		Fixed	operator - (const Fixed &fixed) const;
		Fixed	operator / (const Fixed &fixed) const;
		Fixed	operator * (const Fixed &fixed) const;
		bool	operator < (const Fixed &fixed) const;
		bool	operator <= (const Fixed &fixed) const;
		bool	operator > (const Fixed &fixed) const;
		bool	operator >= (const Fixed &fixed) const;
		bool	operator == (const Fixed &fixed) const;
		bool	operator != (const Fixed &fixed) const;
		Fixed	operator ++ (int);
		Fixed	&operator ++ (void);
		Fixed	operator -- (int);
		Fixed	&operator -- (void);
		Fixed	min(Fixed const &a, Fixed const &b);
		Fixed	min(Fixed &a, Fixed &b);
		Fixed	max(Fixed const &a, Fixed const &b);
		Fixed	max(Fixed &a, Fixed &b);
		

		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream	&operator << (std::ostream &out, Fixed const &fixed);

#endif
