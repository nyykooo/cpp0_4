/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:06:09 by ncampbel          #+#    #+#             */
/*   Updated: 2024/09/25 17:43:41 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "HumanA.hpp"

class HumanB
{
private:
	Weapon		*_weapon;
	std::string	_name;
public:
	HumanB( std::string name );
	~HumanB();
	void	setWeapon( Weapon &weapon );
	void	attack();
};

#endif