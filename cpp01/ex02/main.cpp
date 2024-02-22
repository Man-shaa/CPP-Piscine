/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:29:47 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/26 20:36:41 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Address of str : " << &str << "			|		Value : " << str << std::endl;
	std::cout << "Address of stringPTR : " << stringPTR << "		|		Value : " << *stringPTR << std::endl;
	std::cout << "Address of stringREF : " << &stringREF << "		|		Value : " << stringREF << std::endl;
	return (0);
}
