/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:05:46 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/18 18:15:36 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"
#include "point.hpp"

int main(void)
{
	Point point(-2.5, 1.25);
	Point A(5, 0);
	Point B(-5, 0);
	Point C(5, 5);

	std::cout << point.bsp(A, B, C, point) << std::endl;
	return (0);
}