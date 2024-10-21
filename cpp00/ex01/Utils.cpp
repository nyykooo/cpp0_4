/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:01:54 by ncampbel          #+#    #+#             */
/*   Updated: 2024/09/24 15:47:47 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

void	ft_render_header(void)
{
	ft_print_top();
	ft_print_mid();
	ft_render_row("index");
	ft_render_row("first name");
	ft_render_row("last name");
	ft_render_row("nickname");
	std::cout << "|" << std::endl;
	ft_print_bottom();
}

void	ft_render_row(std::string str)
{
	int i = 0;

	std::cout << "|";
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
	{
		if (str.length() < 10)
		{
			while ( i++ < 10 - str.length())
				std::cout << " ";
		}
		std::cout << str;
	}
}

void	ft_print_divider(void)
{
	std::cout << "#############################################" << std::endl;
}

void	ft_print_top(void)
{
	std::cout << " ___________________________________________" << std::endl;
}

void	ft_print_mid(void)
{
	std::cout << "|          |          |          |          |" << std::endl;
}

void	ft_print_bottom(void)
{
	std::cout << "|__________|__________|__________|__________|" << std::endl;
}