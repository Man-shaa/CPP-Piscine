/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:36:47 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/20 14:15:02 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

// int	main()
// {
// 	ScavTrap	Manuel("Manuel");

// 	Manuel.attack("Naelle");
// 	Manuel.takeDamage(5);
// 	Manuel.beRepaired(2);

// 	FragTrap	Naelle("Naelle");

// 	Naelle.attack("Manuel");
// 	Naelle.takeDamage(2);
// 	Naelle.beRepaired(1);
// 	Naelle.status();

// 	DiamondTrap	Shanley("Shanlou");
// 	Shanley.whoAmI();
// 	Shanley.takeDamage(2);
// 	Shanley.beRepaired(1);
// 	Shanley.status();
// }

int	main()
{
	DiamondTrap d;

	std::cout << std::endl;
	DiamondTrap a("Shanley");
	std::cout << std::endl;
	DiamondTrap b("Manuel");
	std::cout << std::endl << std::endl;
	b.attack("Me");
	d = b;
	std::cout << std::endl;
	a.whoAmI();
	d.whoAmI();
	b.whoAmI();
	std::cout << std::endl;
}