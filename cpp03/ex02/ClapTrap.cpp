/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:37:06 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/20 14:11:00 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _hp(10), _energy(10), _attack(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _energy(10), _attack(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name, unsigned int hp, unsigned int energy, unsigned int attack) : _name(name),
_hp(hp), _energy(energy), _attack(attack)
{
	std::cout << "ClapTrap special constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap &toCopy)
{
	std::cout << "ClapTrap constructor copy called" << std::endl;
	if (this != &toCopy)
		*this = toCopy;
	return ;
}

ClapTrap &ClapTrap::operator = (ClapTrap &toCopy)
{
	this->_name = toCopy._name;
	this->_hp = toCopy._hp;
	this->_energy = toCopy._energy;
	this->_attack = toCopy._attack;
	return(*this);
}

void	ClapTrap::status()
{
	std::cout << "Name : " << _name << std::endl;
	std::cout << "hp : " << _hp << std::endl;
	std::cout << "energy : " << _energy << std::endl;
	std::cout << "attack : " << _attack << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energy > 0)
	{
		std::cout << _name << " attacks " << target << ", causing "
		<< _attack << " points of damage !" << std::endl;
		_energy--;
	}
	else
	{
		std::cout << _name << " has not enough energy to attack " << target << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp > 0)
	{
		std::cout << _name << " takes : " << amount << " points of damage" << std::endl;
		_hp -= amount;
	}
	else
		std::cout << _name << " is dead !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hp > 0 && _energy > 0)
	{
		std::cout << _name << " repairs itself : " << amount << " points hp" << std::endl;
		_hp += amount;
	}
	else
	{
		if (_hp < 0)
			std::cout << _name << " is already dead !" << std::endl;
		else
			std::cout << _name << " has not enough energy to repair itself " << std::endl;
	}
}