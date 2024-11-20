/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:36:17 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/20 23:54:41 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes.hpp"

int main()
{
	{	
		std::cout << "[ANIMALS]" << std::endl;
		const Animal* meta = new Animal();
		const Animal* bilson = new Dog();
		const Animal* douglas = new Cat();
		const WrongAnimal* cho = new WrongCat();
		
		std::cout << std::endl << "[TYPES]" << std::endl;
		std::cout << "meta is a " << meta->getType() << std::endl;
		std::cout << "bilson type is a " << bilson->getType() << std::endl;
		std::cout << "douglas is a " << douglas->getType() << std::endl;
		std::cout << "cho is a " << cho->getType() << std::endl;

		std::cout << std::endl << "[SOUNDS]" << std::endl;
		meta->makeSound();
		bilson->makeSound();
		douglas->makeSound();
		cho->makeSound();

		std::cout << std::endl << "[DESTRUCTORS]" << std::endl;
		delete meta;
		delete bilson;
		delete douglas;
		delete cho;
	}
	{
		size_t i = 6;
		std::cout << std::endl << "[EXTRA TESTS]" << std::endl;
		Animal* animals[6];

		while (i > 3)
			animals[--i] = new Dog();
		while (i > 0)
			animals[--i] = new Cat();

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
		// verify with brain tests
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