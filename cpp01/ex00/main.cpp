/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:30:02 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/12 12:50:20 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie z1("Mateo");
	Zombie *ptr = newZombie("ptr");

	z1.randomChump("Manuel");
	ptr->announce();
	delete (ptr);
	return (0);
}
