/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:10:47 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/22 00:40:02 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria *_inventory[4];
		int _count;
		int _max;
		
	public:
		Character();
		Character(Character const & copy);
		Character & operator=(Character const & copy);
		~Character();

		Character(std::string const & name);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		AMateria *getMateria(int idx) const;
};

#endif