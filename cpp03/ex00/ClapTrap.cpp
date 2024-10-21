/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:51:43 by ncampbel          #+#    #+#             */
/*   Updated: 2024/10/01 19:36:41 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hp(10), _ep(10), _attack(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
	this->_attack = 0;
	this->_ep = 10;
	this->_hp = 10;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _attack(0)
{
	std::cout << "ClapTrap Constructor for the name " << _name << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	if (this != &copy)
	{
		*this = copy;
	}
}

ClapTrap& ClapTrap::operator=(ClapTrap const &copy)
{
	if (this != &copy) {
		*this = copy;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructing ClapTrap RIP" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_ep > 0 && this->_hp > 0)
	{
		this->_ep--;
		int	attack = std::rand() % 10 + 1;
		std::cout << "ClapTrap " << this->_name << "attacks " << target << ", causing " << attack << " points of damage!" << std::endl;
	}
	else if (this->_hp > 0)
		std::cout << "ClapTrap " << this->_name << " is too tired to attack" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " is dead..." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp > 0)
	{
		this->_hp -= amount;
		std::cout << "ClapTrap " << this->_name << " took " << amount << " damage" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is already dead..." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_ep > 0 && this->_hp > 0)
	{
		this->_ep--;
		this->_hp += amount;
		std::cout << "ClapTrap " << this->_name << " repaired " << amount << " hit points" << std::endl;
	}
	else if (this->_hp > 0)
		std::cout << "ClapTrap " << this->_name << " is too tired to repair" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " is dead..." << std::endl;
}
