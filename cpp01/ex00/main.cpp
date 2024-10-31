/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:45:09 by ncampbel          #+#    #+#             */
/*   Updated: 2024/10/31 15:07:32 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	Zombie *zombie;
	Zombie zombie2("Philipinho");

	zombie = newZombie("Arnaldinho");
	zombie->announce();
	zombie2.announce();
	randomChump("Jurilcleiton");
	delete zombie;
	return EXIT_SUCCESS;
}
