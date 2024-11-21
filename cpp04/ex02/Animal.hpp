/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:37:41 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/21 00:38:59 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class AAnimal
{
	protected:
		std::string	_type;
	public:
		AAnimal();
		AAnimal(const AAnimal &copy);
		AAnimal &operator=(AAnimal const &copy);
		virtual ~AAnimal();

		std::string		getType() const;
		virtual void	makeSound() const = 0;
};

#endif