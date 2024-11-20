/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:51:46 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/20 15:41:19 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	std::cout << "TESTING DIAMOND" << std::endl;
	{
		std::cout << "### CONSTRUCTORS ###" << std::endl;
		std::cout << "## DiamondTrap ##" << std::endl;
		DiamondTrap diam("Diam");
		std::cout << "## ClapTrap ##" << std::endl;
		ClapTrap clap;
		std::cout << "## ScavTrap ##" << std::endl;
		ScavTrap scav;
		std::cout << "## FragTrap ##" << std::endl;
		FragTrap frag;
		
		std::cout << std::endl << "### TESTING GETTERS ###" << std::endl;
		std::cout << "## NAME ##" << std::endl;
		std::cout << "ClapTrap clap name: " << clap.getName() << std::endl;
		std::cout << "ScavTrap scav name: " << scav.getName() << std::endl;
		std::cout << "FragTrap frag name: " << frag.getName() << std::endl;
		std::cout << "ClapTrap diam name: " << diam.ClapTrap::getName() << std::endl;
		std::cout << "ScavTrap diam name: " << diam.ScavTrap::getName() << std::endl;
		std::cout << "FragTrap diam name: " << diam.FragTrap::getName() << std::endl;
		std::cout << "DiamondTrap diam name: " << diam.getName() << std::endl;
		std::cout << "## HP ##" << std::endl;
		std::cout << "ClapTrap clap HP: " << clap.getHP() << std::endl;
		std::cout << "ScavTrap scav HP: " << scav.getHP() << std::endl;
		std::cout << "FragTrap frag HP: " << frag.getHP() << std::endl;
		std::cout << "ClapTrap diam HP: " << diam.ClapTrap::getHP() << std::endl;
		std::cout << "ScavTrap diam HP: " << diam.ScavTrap::getHP() << std::endl;
		std::cout << "FragTrap diam HP: " << diam.FragTrap::getHP() << std::endl;
		std::cout << "DiamondTrap diam HP: " << diam.getHP() << std::endl;
		std::cout << "## EP ##" << std::endl;
		std::cout << "ClapTrap clap EP: " << clap.getEP() << std::endl;
		std::cout << "ScavTrap scav EP: " << scav.getEP() << std::endl;
		std::cout << "FragTrap frag EP: " << frag.getEP() << std::endl;
		std::cout << "ClapTrap diam EP: " << diam.ClapTrap::getEP() << std::endl;
		std::cout << "ScavTrap diam EP: " << diam.ScavTrap::getEP() << std::endl;
		std::cout << "FragTrap diam EP: " << diam.FragTrap::getEP() << std::endl;
		std::cout << "DiamondTrap diam EP: " << diam.getEP() << std::endl;
		std::cout << "## ATTACK ##" << std::endl;
		std::cout << "ClapTrap clap Attack: " << clap.getAttack() << std::endl;
		std::cout << "ScavTrap scav Attack: " << scav.getAttack() << std::endl;
		std::cout << "FragTrap frag Attack: " << frag.getAttack() << std::endl;
		std::cout << "ClapTrap diam Attack: " << diam.ClapTrap::getAttack() << std::endl;
		std::cout << "ScavTrap diam Attack: " << diam.ScavTrap::getAttack() << std::endl;
		std::cout << "FragTrap diam Attack: " << diam.FragTrap::getAttack() << std::endl;
		std::cout << "DiamondTrap diam Attack: " << diam.getAttack() << std::endl;
		

		std::cout << std::endl << "### TESTING ACTIONS ###" << std::endl;
		diam.attack("some other robot");
		for (int i = 0; i < 30; i++)
			diam.ClapTrap::takeDamage(3);
		std::cout << "DiamondTrap HP: " << diam.getHP() << std::endl;
		diam.beRepaired(5);
		std::cout << "DiamondTrap HP: " << diam.getHP() << std::endl;
		std::cout << "Diamond EP: " << diam.getEP() << std::endl;
		for (int i = 0; i < 50; i++)
			diam.ClapTrap::beRepaired(1);
		std::cout << "Diamond EP: " << diam.getEP() << std::endl;
		diam.takeDamage(100);
		diam.beRepaired(100);
		diam.attack("someone");

		std::cout << std::endl << "### TESTING EXCLUSIVE FUNCTIONS ###" << std::endl;
		diam.whoAmI();
		diam.guardGate();
		diam.highFiveGuys();

		std::cout << std::endl << "### DESTRUCTORS ###" << std::endl;
	}
	return (0);
}
