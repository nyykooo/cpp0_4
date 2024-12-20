/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:48:01 by ncampbel          #+#    #+#             */
/*   Updated: 2024/09/25 11:10:31 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:
		Zombie( std::string name );
		~Zombie( void );
		void	announce( void );
	private:
		std::string _name;
};


Zombie *newZombie( std::string name);
void 	randomChump( std::string name);

#endif