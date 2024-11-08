/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:26:12 by ncampbel          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/11/04 13:44:47 by ncampbel         ###   ########.fr       */
=======
/*   Updated: 2024/11/06 18:13:47 by ncampbel         ###   ########.fr       */
>>>>>>> 7c58925d4e63941448ef5561f56364fed78bdc27
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Hello, my name is Harl" << std::endl << std::endl;
}

Harl::~Harl()
{
	std::cout << "Ok, bye bye!" << std::endl;
}

void	Harl::debug( void )
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-" <<
		"ketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough " <<
		"bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years " <<
		"whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::error ( void )
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
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