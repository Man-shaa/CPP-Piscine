/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:18:27 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/27 21:55:13 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;
	std::string	input;

	std::cout << "Type : [DEBUG / INFO / WARNING / ERROR] or EXIT to quit the programm" << std::endl;
	std::getline(std::cin, input);
	while (std::cin.eof() == false && input.compare("EXIT"))
	{
		std::cout << std::endl;
		harl.complain(input);
		std::cout << std::endl;
		std::getline(std::cin, input);
	}
	return (0);
}
