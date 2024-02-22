/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:07:08 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/04 18:51:10 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Default", 100, 50, 20)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap &toCopy) : ClapTrap(toCopy._name, toCopy._hp, toCopy._energy, toCopy._attack)
{
	std::cout << "ScavTrap constructor copy called" << std::endl;
	if (this != &toCopy)
		*this = toCopy;
	return ;
}

unsigned int	ScavTrap::getEnergy(void) const
{
	return (50);
}


ScavTrap &ScavTrap::operator = (ScavTrap &toCopy)
{
	this->_name = toCopy._name;
	this->_hp = toCopy._hp;
	this->_energy = toCopy._energy;
	this->_attack = toCopy._attack;
	return(*this);
}

void ScavTrap::guardGate()
{
	std::cout << _name << " entered in gate keeper mode" << std::endl;
}
