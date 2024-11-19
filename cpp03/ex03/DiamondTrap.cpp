/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:25:18 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/19 20:34:53 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//----------------- Constructor/Destructor -----------------
DiamondTrap::DiamondTrap(void): ClapTrap(), ScavTrap(), FragTrap()
{
	_name = "default";
	_hp = FragTrap::_hp;
	_ep = ScavTrap::_ep;
	_attack = FragTrap::_attack;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	_hp = FragTrap::_hp;
	_ep = ScavTrap::_ep;
	_attack = FragTrap::_attack;
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->_name = name;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

//----------------- Operator -----------------
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
	std::cout << "DiamondTrap assignation operator called" << std::endl;
	if (this == &copy)
		return (*this);
	_name = copy._name;
	_hp = copy._hp;
	_ep = copy._ep;
	_attack = copy._attack;
	return (*this);
}

//----------------- Member function -----------------
void	DiamondTrap::whoAmI()
{
	std::cout << "I am " << _name << " and my ClapTrap name is " << ScavTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

//----------------- Getter -----------------

std::string	DiamondTrap::getName(void) const
{
	return (_name);
}

int	DiamondTrap::getHP(void) const
{
	return (_hp);
}

int	DiamondTrap::getEP(void) const
{
	return (_ep);
}

int	DiamondTrap::getAttack(void) const
{
	return (_attack);
}