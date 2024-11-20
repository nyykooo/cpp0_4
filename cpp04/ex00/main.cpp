/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:36:17 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/20 23:39:17 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes.hpp"

int main()
{
	std::cout << "[ANIMALS]" << std::endl;
	const Animal* meta = new Animal();
	const Animal* bilson = new Dog();
	const Animal* douglas = new Cat();
	const WrongAnimal* cho = new WrongCat();
	const WrongAnimal* wrong = new WrongAnimal();
	
	std::cout << std::endl << "[TYPES]" << std::endl;
	std::cout << "bilson type is a " << ANSI_UNDERLINE << bilson->getType() << ANSI_RESET << std::endl;
	std::cout << "douglas is a " << ANSI_UNDERLINE << douglas->getType() << ANSI_RESET << std::endl;
	std::cout << "meta is a " << ANSI_UNDERLINE << meta->getType() << ANSI_RESET << std::endl;
	std::cout << "cho is a " << ANSI_UNDERLINE << cho->getType() << ANSI_RESET << std::endl;
	std::cout << "wrong is a " << ANSI_UNDERLINE << wrong->getType() << ANSI_RESET << std::endl;

	std::cout << std::endl << "[SOUNDS]" << std::endl;
	douglas->makeSound(); //will output the cat sound!
	bilson->makeSound();
	meta->makeSound();
	cho->makeSound();
	wrong->makeSound();

	std::cout << std::endl << "[DESTRUCTORS]" << std::endl;
	delete meta;
	delete bilson; // entender porque os cachorros e os gatos nao chamam os proprios destructors tbm
	delete douglas;
	delete cho;
	delete wrong;

	return 0;
}