/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:06:07 by ncampbel          #+#    #+#             */
/*   Updated: 2024/09/25 17:33:01 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class  Weapon
{
	private:
		std::string	_type;
	public:
		Weapon( std::string type );
		~Weapon();
		std::string	getType() const;
		void		setType( std::string new_type );
};

#endif