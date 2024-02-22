/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:36:47 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/20 13:57:35 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Naelle("Naelle");
	ClapTrap	Shanley("Shanley");

	Naelle.attack("Shanley");
	Naelle.status();

	Shanley.takeDamage(3);
	Shanley.status();

	Shanley.beRepaired(2);
	Shanley.status();
}
