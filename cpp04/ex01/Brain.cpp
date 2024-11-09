/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 23:19:37 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/09 18:58:23 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain is thinking" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = copy._ideas[i];
}

Brain&	Brain::operator=(Brain const &copy)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &copy)
	{	//infinit loop if we use *this = copy;
		for (int i = 0; i < 100; ++i) 
        this->_ideas[i] = copy._ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain is getting dizzy" << std::endl;
}

