/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:59:17 by ncampbel          #+#    #+#             */
/*   Updated: 2024/09/25 17:35:05 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
	this->_type = type;
}

Weapon::~Weapon ()
{
	std::cout << "Weapon destroyed" << std::endl;
}

std::string Weapon::getType() const 
{
	return (this->_type);
}

void	Weapon::setType( std::string new_type )
{
	this->_type = new_type;
}