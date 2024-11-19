/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:51:46 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/19 15:21:57 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	std::cout << "### TESTING CLAPTRAP ###" << std::endl;
	{
		std::cout << "### CONSTRUCTORS ###" << std::endl;
		ClapTrap a;
		ClapTrap b("Cody");
	
		std::cout << std::endl << "### TESTING ACTIONS ###" << std::endl;
		a.attack("some other robot");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("some other other robot");
		b.beRepaired(3);
		for (int i = 0; i < 12; i++)
			b.attack("Cody-clone");
		b.beRepaired(3);
		std::cout << std::endl << "### DESTRUCTORS ###" << std::endl;
	}
	std::cout << "\n\n### TESTING SCAVTRAP ###" << std::endl;
	{
		std::cout << "### CONSTRUCTORS ###" << std::endl;
		ScavTrap a;
		ScavTrap b("Cody");
	
		std::cout << std::endl << "### TESTING ACTIONS ###" << std::endl;
		a.attack("some other robot");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("some other other robot");
		b.beRepaired(3);
		for (int i = 0; i < 12; i++)
			b.attack("Cody-clone");
		b.beRepaired(3);
		b.guardGate();
		std::cout << std::endl << "### DESTRUCTORS ###" << std::endl;
	}
}
