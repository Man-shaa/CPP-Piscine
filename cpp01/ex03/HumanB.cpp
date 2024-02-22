/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:41:10 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/26 22:55:26 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (!_weapon)
		std::cout << getName() << " attacks with their feets" << std::endl;
	else
		std::cout << getName() << " attacks with their " << _weapon->getType() << std::endl;
}

std::string	HumanB::getName(void) const
{
	return (_name);
}
