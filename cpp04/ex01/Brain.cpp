/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 23:19:37 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/21 00:00:36 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes.hpp"

Brain::Brain()
{
	std::cout << ANSI_PURPLE << "🧠 Brain is thinking 🧠" << ANSI_RESET << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << ANSI_PURPLE << "🧠 Brain copy constructor called 🧠" << ANSI_RESET << std::endl;
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = copy._ideas[i];
}

Brain&	Brain::operator=(Brain const &copy)
{
	std::cout << ANSI_PURPLE << "🧠 Brain copy assignment operator called 🧠" << ANSI_RESET << std::endl;
	if (this != &copy)
	{	//infinit loop if we use *this = copy;
		for (int i = 0; i < 100; ++i) 
        this->_ideas[i] = copy._ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << ANSI_PURPLE << "🧠 Brain is getting dizzy 🧠" << ANSI_RESET << std::endl;
}

