/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:10:54 by msharifi          #+#    #+#             */
/*   Updated: 2024/02/22 14:10:55 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "includes/PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		std::string tmp;
		for (int i = 1; i < argc; i++)
		{
			for (int j = i + 1; j < argc; j++)
			{
				if (atoi(argv[i]) == atoi(argv[j]))
				{
					std::cout << "Error: You can't put duplicates" << std::endl;
					return (1);
				}
			}
			tmp += argv[i];
			tmp += ' ';
		}

		PmergeMe pmerg(tmp, argc - 1);
		try
		{
			pmerg.fillCont(tmp);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	else
		std::cout << "Error: Need 1 or more arguments." << std::endl;
}
