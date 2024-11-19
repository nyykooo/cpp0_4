/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:44:46 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/19 20:35:15 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private:
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& copy);
		
		~FragTrap();
		
		FragTrap& operator=(const FragTrap& copy);
		
		void	highFiveGuys(void);

		// Getters
		std::string	getName(void) const;
		int			getHP(void) const;
		int			getEP(void) const;
		int			getAttack(void) const;
};

#endif