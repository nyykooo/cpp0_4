/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:08:56 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/07 15:26:28 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name);

int main( void)
{
	{
		std::cout << std::endl << "[JUBILEU]" << std::endl;
		int	i = 0;
		Zombie *zombie;

		zombie = zombieHorde( 10, "jubileu");
		if (!zombie)
			return (1);
		while (i < 10)
		{
			zombie[i++].announce();
		}

		delete[] zombie;
	}
	{
		std::cout << std::endl << "[BILSON]" << std::endl;
		int	i = 0;
		Zombie *zombie;

		zombie = zombieHorde( 0, "bilson");
		if (!zombie)
			return (1);
		while (i < 0)
		{
			zombie[i++].announce();
		}

		delete[] zombie;
	}
	{
		std::cout << std::endl << "[CATCHAU]" << std::endl;
		int	i = 0;
		Zombie *zombie;

		zombie = zombieHorde( 100, "catchau");
		if (!zombie)
			return (1);
		while (i < 100)
		{
			zombie[i++].announce();
		}

		delete[] zombie;
	}
	{
		std::cout << std::endl << "[ARNALDINHO]" << std::endl;
		int	i = 0;
		Zombie *zombie;

		zombie = zombieHorde( -1, "arnaldinho");
		if (!zombie)
		{
			std::cerr << "Error: Bad alloc" << std::endl;
			return (EXIT_FAILURE);
		}
		while (i < -1)
		{
			zombie[i++].announce();
		}

		delete[] zombie;	
	}
}