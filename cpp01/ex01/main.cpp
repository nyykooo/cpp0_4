/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:08:56 by ncampbel          #+#    #+#             */
/*   Updated: 2024/09/25 11:50:51 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name);

int main( void)
{
	int	i = 0;
	Zombie *zombie;

	zombie = zombieHorde( 8, "jubileu");
	while (i < 8)
	{
		zombie[i++].announce();
	}
	delete[] zombie;
}