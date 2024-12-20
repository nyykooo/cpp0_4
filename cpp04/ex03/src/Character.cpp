/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 23:21:34 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/22 00:42:37 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character() : _name("Default"), _count(0), _max(4)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(Character const & copy)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	*this = copy;
}

Character & Character::operator=(Character const & copy)
{
	if (this != &copy)
	{
		_name = copy._name;
		_count = copy._count;
		_max = copy._max;
		for (int i = 0; i < _count; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			_inventory[i] = copy._inventory[i]->clone();
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < _count; i++)
	{
		if (_inventory[i] != NULL)
			delete _inventory[i];
	}
}

Character::Character(std::string const & name) : _name(name), _count(0), _max(4)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	if (_count < _max && m)
	{
		_inventory[_count] = m;
		_count++;
	}
	else
		std::cout << "Inventory is full!" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < _count)
	{
		std::cout << "🗑️ Unequipping " << _inventory[idx]->getType() + " 🗑️"<< std::endl;
		for (int i = idx; i < _count - 1; i++)
			_inventory[i] = _inventory[i + 1];
		_inventory[_count - 1] = NULL;
	}
	else
		std::cout << "⛔ Unable to unequip ⛔" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < _count && _inventory[idx])
		_inventory[idx]->use(target);
	else
		std::cout << "⛔ Unable to use ⛔" << std::endl;
}

AMateria *Character::getMateria(int idx) const
{
	if (idx >= 0 && idx < _count)
		return (_inventory[idx]);
	else
		std::cout << "⛔ Unable to get materia ⛔" << std::endl;
	return (NULL);

}