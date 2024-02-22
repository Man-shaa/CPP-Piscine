/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:01:19 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/20 14:10:23 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("Default", 100, 100, 30)
{
	std::cout << "FragTrap default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap constructor called" << std::endl;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap &toCopy) : ClapTrap(toCopy._name, toCopy._hp, toCopy._energy, toCopy._attack)
{
	std::cout << "FragTrap constructor copy called" << std::endl;
	if (this != &toCopy)
		*this = toCopy;
	return ;
}

FragTrap &FragTrap::operator = (FragTrap &toCopy)
{
	this->_name = toCopy._name;
	this->_hp = toCopy._hp;
	this->_energy = toCopy._energy;
	this->_attack = toCopy._attack;
	return(*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "high five ?? :D" << std::endl;
}
