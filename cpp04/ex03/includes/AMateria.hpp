/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:57:46 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/21 23:15:56 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(AMateria const & copy);
		AMateria & operator=(AMateria const & copy);
		virtual ~AMateria();

		AMateria(std::string const & type);

		std::string const & getType() const;
        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif