/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:37:41 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/20 23:34:13 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal &operator=(WrongAnimal const &copy);
		virtual ~WrongAnimal(); //boa prática declarar o destrutor da classe base como virtual
		//Isso garante que os destrutores das classes derivadas sejam chamados corretamente, liberando todos os recursos que as classes derivadas podem ter alocado.
		std::string		getType() const;
		virtual void	makeSound() const;
};

#endif