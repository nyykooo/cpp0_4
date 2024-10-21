/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:50:58 by ncampbel          #+#    #+#             */
/*   Updated: 2024/09/24 14:16:44 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook phone_book;
	std::string input;

	while (1)
	{
		std::cout << "Please enter a comand (ADD, SEARCH, EXIT):" << std::endl;
		std::getline(std::cin, input); 

		if (input.compare("EXIT") == 0)
		{
			break;
		}
		else if (input.compare("ADD") == 0)
			phone_book.ft_add_contact();
		else if (input.compare("SEARCH") == 0)
			phone_book.ft_search_contact();
	}
}