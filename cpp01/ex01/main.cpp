/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:50:10 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/12 13:07:35 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int	n = 5;

	if (n <= 0)
	{
		std::cout << "Please create an positiv number of zombies" << std::endl;
		return (1);
	}

	horde = zombieHorde(n, "Manu");

	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
