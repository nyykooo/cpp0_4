/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:51:46 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/19 20:43:20 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	// std::cout << "### TESTING CLAPTRAP ###" << std::endl;
	// {
	// 	std::cout << "### CONSTRUCTORS ###" << std::endl;
	// 	ClapTrap a;
	// 	ClapTrap b("Cody");
	
	// 	std::cout << std::endl << "### TESTING ACTIONS ###" << std::endl;
	// 	a.attack("some other robot");
	// 	a.takeDamage(10);
	// 	a.takeDamage(10);
	// 	a.beRepaired(5);
	// 	a.attack("some other other robot");
	// 	b.beRepaired(3);
	// 	for (int i = 0; i < 12; i++)
	// 		b.attack("Cody-clone");
	// 	b.beRepaired(3);
	// 	std::cout << std::endl << "### DESTRUCTORS ###" << std::endl;
	// }
	
	// std::cout << "\n\n### TESTING SCAVTRAP ###" << std::endl;
	// {
	// 	std::cout << "### CONSTRUCTORS ###" << std::endl;
	// 	ScavTrap a;
	// 	ScavTrap b("Cody");
	
	// 	std::cout << std::endl << "### TESTING ACTIONS ###" << std::endl;
	// 	a.attack("some other robot");
	// 	a.takeDamage(10);
	// 	a.takeDamage(10);
	// 	a.beRepaired(5);
	// 	a.attack("some other other robot");
	// 	b.beRepaired(3);
	// 	for (int i = 0; i < 12; i++)
	// 		b.attack("Cody-clone");
	// 	b.beRepaired(3);
	// 	b.guardGate();
	// 	std::cout << std::endl << "### DESTRUCTORS ###" << std::endl;
	// }
	
	// std::cout << "\n\n### TESTING FRAGTRAP ###" << std::endl;		
	// {
	// 	std::cout << "### CONSTRUCTORS ###" << std::endl;
	// 	FragTrap a;
	// 	FragTrap b("Cody");
	
	// 	std::cout << std::endl << "### TESTING ACTIONS ###" << std::endl;
	// 	a.attack("some other robot");
	// 	a.takeDamage(10);
	// 	a.takeDamage(10);
	// 	a.beRepaired(5);
	// 	a.attack("some other other robot");
	// 	b.beRepaired(3);
	// 	for (int i = 0; i < 12; i++)
	// 		b.attack("Cody-clone");
	// 	b.beRepaired(3);
	// 	b.highFiveGuys();
		
	// 	std::cout << std::endl << "### DESTRUCTORS ###" << std::endl;
	// }
	std::cout << "TESTING DIAMOND" << std::endl;
	{
		std::cout << "### CONSTRUCTORS ###" << std::endl;
		ClapTrap clap;
		ScavTrap scav;
		FragTrap frag;
		DiamondTrap diam("Diam");

		
		std::cout << std::endl << "### TESTING GETTERS ###" << std::endl;
		std::cout << "## NAME ##" << std::endl;
		std::cout << "ClapTrap name: " << clap.getName() << std::endl;
		std::cout << "ScavTrap name: " << scav.getName() << std::endl;
		std::cout << "FragTrap name: " << frag.getName() << std::endl;
		std::cout << "DiamondTrap name: " << diam.getName() << std::endl;
		std::cout << "## HP ##" << std::endl;
		std::cout << "ClapTrap HP: " << clap.getHP() << std::endl;
		std::cout << "ScavTrap HP: " << scav.getHP() << std::endl;
		std::cout << "FragTrap HP: " << frag.getHP() << std::endl;
		std::cout << "DiamondTrap HP: " << diam.getHP() << std::endl;
		std::cout << "## EP ##" << std::endl;
		std::cout << "ClapTrap EP: " << clap.getEP() << std::endl;
		std::cout << "ScavTrap EP: " << scav.getEP() << std::endl;
		std::cout << "FragTrap EP: " << diam.getEP() << std::endl;
		std::cout << "DiamondTrap EP: " << diam.getEP() << std::endl;
		std::cout << "## ATTACK ##" << std::endl;
		std::cout << "ClapTrap Attack: " << clap.getAttack() << std::endl;
		std::cout << "ScavTrap Attack: " << scav.getAttack() << std::endl;
		std::cout << "FragTrap Attack: " << frag.getAttack() << std::endl;
		std::cout << "DiamondTrap Attack: " << diam.getAttack() << std::endl;
		

		std::cout << std::endl << "### TESTING ACTIONS ###" << std::endl;
		diam.attack("some other robot");
		diam.whoAmI();
	}
	return (0);
}
