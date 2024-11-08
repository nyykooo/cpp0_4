/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 23:19:37 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/08 23:21:11 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain is thinking" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	if (this != &copy)
	{
		std::cout << "Brain copy constructor called" << std::endl;
		*this = copy;
	}
}

Brain&	Brain::operator=(Brain const &copy)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		*this = copy;
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain is getting dizzy" << std::endl;
}

