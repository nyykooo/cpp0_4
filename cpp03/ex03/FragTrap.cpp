/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:44:48 by ncampbel          #+#    #+#             */
/*   Updated: 2024/10/03 17:02:09 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_name = "";
	this->_hp = 100;
	this->_ep = 100;
	this->_attack = 30;
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hp = 100;
	this->_ep = 100;
	this->_attack = 30;
	std::cout << "FragTrap Name Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{	
	if (this != &copy)
	{
		*this = copy;
	}
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	if (this != &copy)
	{
		*this = copy;
	}
	std::cout << "FragTrap Copy Assignment operator called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Desconstructor called" << std::endl;
}

void	FragTrap::highFiveGuys( void )
{
	if (this->_ep > 0 && this->_hp > 0)
	{
		this->_ep--;
		std::cout << "Hey guys! Give me five!" << std::endl;
	}
	else if (this->_hp > 0)
		std::cout << "FragTrap is too tired to high five" << std::endl;
	else
		std::cout << "FragTrap is already dead" << std::endl;
}