/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:45:09 by ncampbel          #+#    #+#             */
/*   Updated: 2024/09/25 11:10:38 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	Zombie *zombie;

	zombie = newZombie("Arnaldinho");
	zombie->announce();
	randomChump("Jurilcleiton");
	delete zombie;
	return EXIT_SUCCESS;
}
