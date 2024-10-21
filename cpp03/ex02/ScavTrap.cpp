/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:07:35 by ncampbel          #+#    #+#             */
/*   Updated: 2024/10/03 15:39:23 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_name = "";
	this->_attack = 20;
	this->_hp = 100;
	this->_ep = 50;
	std::cout << "ScavTrap Constructor called" << std::endl;
}


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_ep = 50;
	this->_attack = 20;
	std::cout << "ScavTrap Constructor for the name " << this->_name << " called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	if (this != &copy)
	{
		*this = copy;
	}
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	
	if (this != &copy)
	{
		*this = copy;
	}
	std::cout << "ScavTrap Copy Assignment operator called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_ep > 0 && this->_hp > 0)
	{
		this->_ep--;
		std::cout << "ScavTrap " << this->_name << "attacks " << target << ", causing " << this->_attack << " points of damage!" << std::endl;
	}
	else if (this->_hp > 0)
		std::cout << "ScavTrap " << this->_name << " is too tired to attack" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " is dead..." << std::endl;
}

void	ScavTrap::guardGate()
{
	if (this->_ep > 0 && this->_hp)
	{
		this->_ep--;
		std::cout << "ScavTrap " << this->_name << " is in Gate keeper mode now. Stay back!" << std::endl;
	}
	else if (this->_hp > 0)
		std::cout << "ScavTrap " << this->_name << " is too tired to keep the Gate" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " is dead..." << std::endl;
		
}
