/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:26:12 by ncampbel          #+#    #+#             */
/*   Updated: 2024/09/26 21:02:19 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Welcome, my name is Harl" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Ok, bye bye!" << std::endl;
}

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-" <<
		"ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough " <<
		"bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years " <<
		"whereas you started working here since last month." << std::endl;
}

void	Harl::error ( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level )
{
	void			(Harl::*ptr_member[4])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string		ptr_index[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int				index = 0;

	while (index < 4)
	{
		if (level.compare(ptr_index[index]) == 0)
		{
			(this->*ptr_member[index])();
			break;
		}
		index++;
	}
	return ;
}
