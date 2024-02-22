/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 14:55:08 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/22 16:44:59 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	char		letter;
	std::string	str;
	int			j;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		j = 0;
		str = av[i];
		while (str[j])
		{
			letter = toupper((int)str[j]);
			std::cout << letter;
			j++;
		}
		if (i < ac - 1)
			std::cout << ' ';
	}
	std::cout << std::endl;
	return (0);
}
