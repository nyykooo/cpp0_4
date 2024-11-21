/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:36:17 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/21 00:28:20 by ncampbel         ###   ########.fr       */
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
		delete cho;
		delete douglas;
		delete bilson;
		delete meta;
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
		Brain *brain = original.getBrain();
		brain->setIdea("I am a dog.", 0);
		brain->setIdea("I like to bark.", 1);
		brain->setIdea("I like to chase cats.", 2);
		
		Dog copy(original);

		Dog another;
		another = original;

		std::cout << std::endl << "[DEEP COPY TESTS]" << std::endl;
		std::cout << "Copy ideas:" << std::endl;
		brain = copy.getBrain();
		std::cout << "Idea 0: " << brain->getIdea(0) << std::endl;
		std::cout << "Idea 1: " << brain->getIdea(1) << std::endl;
		std::cout << "Idea 2: " << brain->getIdea(2) << std::endl;

		std::cout << "Another ideas:" << std::endl;
		brain = another.getBrain();
		std::cout << "Idea 0: " << brain->getIdea(0) << std::endl;
		std::cout << "Idea 1: " << brain->getIdea(1) << std::endl;
		std::cout << "Idea 2: " << brain->getIdea(2) << std::endl;

		if (original.getBrain() != another.getBrain()) {
			std::cout << "Deep copy successful for copy assignment operator." << std::endl;
		} else {
			std::cout << "Deep copy failed for copy assignment operator." << std::endl;
		}

		return 0;
	}
	return 0;
}