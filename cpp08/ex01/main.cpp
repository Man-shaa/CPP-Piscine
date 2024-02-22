/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:45:49 by msharifi          #+#    #+#             */
/*   Updated: 2023/09/08 19:34:53 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span	Shanley(5);
	try
	{
		Shanley.addNumber(5);
		Shanley.addNumber(-1);
		Shanley.addNumber(4);
		Shanley.addNumber(34);
		Shanley.addNumber(-12);
		// Shanley.printList();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	// int	tab[] = {5, -1, 4, 34, -12};
	// try
	// {
	// 	Shanley.addNumberFromTab(tab, sizeof(tab) / sizeof(tab[0]));
	// 	Shanley.printList();
	// }
	// catch (const std::exception &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }


	// Copy constructor

	// Span	Copy(Shanley);
	// Copy.printList();

	// Operator =

	// Span	Manu;
	// Manu = Shanley;
	// Manu.printList();

	std::cout << Shanley.longestSpan() << std::endl;
	std::cout << Shanley.shortestSpan() << std::endl;
	return (0);
}

// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return (0);
// }