/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:09:35 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/04 18:57:46 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap(), ScavTrap(), FragTrap()
{
	_name = "Default";
	this->ClapTrap::_name = _name + "_clap_name";
	this->_hp = FragTrap::getHp();
	this->_energy = ScavTrap::getEnergy();
	this->_attack = FragTrap::getAttack();
	std::cout << "DiamondTrap default contructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	_name = name;
	this->ClapTrap::_name = _name + "_clap_name";
	this->_hp = FragTrap::getHp();
	this->_energy = ScavTrap::getEnergy();
	this->_attack = FragTrap::getAttack();
	std::cout << "DiamondTrap contructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap &toCopy) : ClapTrap(toCopy._name, toCopy._hp, toCopy._energy, toCopy._attack)
{
	std::cout << "DiamondTrap constructor copy called" << std::endl;
	if (this != &toCopy)
		*this = toCopy;
	return ;
}

DiamondTrap &DiamondTrap::operator = (DiamondTrap &toCopy)
{
	this->_name = toCopy._name;
	ClapTrap::_name = _name + "_clap_name";
	this->_hp = toCopy._hp;
	this->_energy = toCopy._energy;
	this->_attack = toCopy._attack;
	return(*this);
}

void	DiamondTrap::attack(std::string target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Name : " << _name << std::endl;
	std::cout << "ClapTrap Name : "<< ClapTrap::_name << std::endl;
}
