/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:36:17 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/09 18:59:53 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes.hpp"

int main()
{
	{	
		std::cout << "[ANIMALS]" << std::endl;
		std::cout << ANSI_BLUE;
		const Animal* meta = new Animal();
		std::cout << ANSI_RED;
		const Animal* bilson = new Dog();
		std::cout << ANSI_GREEN;
		const Animal* douglas = new Cat();
		std::cout << ANSI_YELLOW;
		const WrongAnimal* cho = new WrongCat();
		std::cout << ANSI_RESET;
		
		std::cout << std::endl << "[TYPES]" << std::endl;
		std::cout << ANSI_BLUE << "meta is a " << ANSI_UNDERLINE << meta->getType() << ANSI_RESET << std::endl;
		std::cout << ANSI_RED << "bilson type is a " << ANSI_UNDERLINE << bilson->getType() << ANSI_RESET << std::endl;
		std::cout << ANSI_GREEN << "douglas is a " << ANSI_UNDERLINE << douglas->getType() << ANSI_RESET << std::endl;
		std::cout << ANSI_YELLOW << "cho is a " << ANSI_UNDERLINE << cho->getType() << ANSI_RESET << std::endl;

		std::cout << std::endl << "[SOUNDS]" << std::endl;
		std::cout << ANSI_BLUE;
		meta->makeSound();
		std::cout << ANSI_RED;
		bilson->makeSound();
		std::cout << ANSI_GREEN;
		douglas->makeSound();
		std::cout << ANSI_YELLOW;
		cho->makeSound();
		std::cout << ANSI_RESET;

		std::cout << std::endl << "[DESTRUCTORS]" << std::endl;
		std::cout << ANSI_BLUE;
		delete meta;
		std::cout << ANSI_RED;
		delete bilson;
		std::cout << ANSI_GREEN;
		delete douglas;
		std::cout << ANSI_YELLOW;
		delete cho;
		std::cout << ANSI_RESET;
	}
	{
		size_t i = 6;
		std::cout << std::endl << "[EXTRA TESTS]" << std::endl;
		std::cout << ANSI_BLUE;
		Animal* animals[6];

		std::cout << ANSI_RED;
		while (i > 3)
			animals[--i] = new Dog();
		std::cout << ANSI_GREEN;
		while (i > 0)
			animals[--i] = new Cat();

		std::cout << ANSI_RESET;
		std::cout << std::endl << "[DESTRUCTORS]" << std::endl;
		i = 0;
		while (i < 6)
		{
			delete animals[i++];
		}
	}
	{
		std::cout << std::endl << "[DEEP COPY]" << std::endl;
		Dog original;
		Dog copy(original);

		Dog another;
		another = original;

		// verify that the brain is a deep copy
		std::cout << std::endl << "[DEEP COPY TESTS]" << std::endl;
		if (original.getBrain() != copy.getBrain()) {
			std::cout << "Deep copy successful for copy constructor." << std::endl;
		} else {
			std::cout << "Deep copy failed for copy constructor." << std::endl;
		}

		if (original.getBrain() != another.getBrain()) {
			std::cout << "Deep copy successful for copy assignment operator." << std::endl;
		} else {
			std::cout << "Deep copy failed for copy assignment operator." << std::endl;
		}

		return 0;
	}
	return 0;
}