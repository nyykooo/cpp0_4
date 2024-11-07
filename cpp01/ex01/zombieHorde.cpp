/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:08:50 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/07 15:19:18 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name)
{
	int	i = 0;

	if (N < 0)
		return NULL;
	Zombie *zombies = new Zombie[N];
	while (i < N)
	{
		zombies[i++].initializeZombie( name );
	}
	return zombies;
}