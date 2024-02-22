/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:36:47 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/20 14:11:59 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	Manuel("Manuel");

	Manuel.attack("Naelle");
	Manuel.takeDamage(5);
	Manuel.beRepaired(2);
	Manuel.status();

	FragTrap	Naelle("Naelle");

	Naelle.attack("Manuel");
	Naelle.takeDamage(2);
	Naelle.beRepaired(1);
	Naelle.highFivesGuys();
	Naelle.status();
}