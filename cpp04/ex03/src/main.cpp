/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:36:37 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/22 00:04:10 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ICharacter.hpp"
#include "../includes/AMateria.hpp"
#include "../includes/IMateriaSource.hpp"
#include "../includes/Character.hpp"
#include "../includes/MateriaSource.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"

// An interface in C++ is an abstract class where:
    // All member functions are pure virtual functions.
    // It has no data members (although technically allowed, it's not ideal for interfaces).
    // You typically do not provide any default implementation.

// Uma classe derivada que herda de uma classe 
// abstrata ou de uma interface em C++ precisa implementar 
// todas as funções virtuais puras (pure virtual functions) da classe 
// base. Caso contrário, a classe derivada também será considerada abstrata
//  e não poderá ser instanciada.

// Why Use Interfaces?
	// Abstraction: Enforces a contract that all derived classes must follow.
	// Polymorphism: Enables writing flexible and reusable code that can work with different types of objects through a common interface.

//Handle the Materias your character left on the floor as you like.
// Save the addresses before calling unequip(), or anything else, but
// don’t forget that you have to avoid memory leaks.

int main()
{
	std::cout << "### SUBJECT TESTS ###" << std::endl;
	{	
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}

	std::cout << "\n### MORE TESTS ###" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		Ice *ice1 = new Ice();
		Ice *ice2 = new Ice();
		Ice *ice3 = new Ice();
		Cure *cure1 = new Cure();
		Cure *cure2 = new Cure();
		Cure *cure3 = new Cure();
		Character *sourcerer = new Character("sourcerer");
		Character *dummie = new Character("dummie");

		
		src->learnMateria(ice1);
		src->learnMateria(ice2);
		src->learnMateria(ice3);
		src->learnMateria(cure1);
		src->learnMateria(cure2);
		src->learnMateria(cure3);		

		sourcerer->equip(src->createMateria("ice"));
		sourcerer->equip(src->createMateria("cure"));
		sourcerer->equip(src->createMateria("ice"));
		sourcerer->equip(src->createMateria("cure"));

		std::cout << "### SOURCERER MATERIAS ###" << std::endl;
		sourcerer->use(0, *dummie);
		sourcerer->use(1, *dummie);
		sourcerer->use(2, *dummie);
		sourcerer->use(3, *dummie);
		sourcerer->use(4, *dummie);

		std::cout << "### DUMMIE MATERIAS ###" << std::endl;
		dummie->use(0, *sourcerer);
		dummie->use(1, *sourcerer);
		dummie->use(2, *sourcerer);
		dummie->use(3, *sourcerer);

		delete src;
		delete cure2;
		delete cure3;
		delete sourcerer;
		delete dummie;
	}
	return 0;
}