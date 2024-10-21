/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:54:15 by ncampbel          #+#    #+#             */
/*   Updated: 2024/09/24 15:51:48 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Utils.hpp"

PhoneBook::PhoneBook(void) {
	std::cout << "Hello I'm PipipiPopopo, your smart phonebook software!" << std::endl;
	this->_index = 0;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "PipipiPopopo turning off!" << std::endl;
}

void	PhoneBook::ft_add_contact() {
	Contact contact;

	std::cout << "Please enter the following information: " << std::endl;
	ft_print_divider();
	std::cout << "First name: ";
	this->_contacts[this->_index % 8].ft_set_info("first_name");
	ft_print_divider();
	std::cout << "Last name: ";
	this->_contacts[this->_index % 8].ft_set_info("last_name");
	ft_print_divider();
	std::cout << "Nickname: ";
	this->_contacts[this->_index % 8].ft_set_info("nickname");
	ft_print_divider();
	std::cout << "Phone number: ";
	this->_contacts[this->_index % 8].ft_set_info("phone_number");
	ft_print_divider();
	std::cout << "Darkest secret: ";
	this->_contacts[this->_index % 8].ft_set_info("darkest_secret");
	ft_print_divider();
	this->_index++;
}

void	PhoneBook::ft_search_contact() {
	int	i;

	i = 0;
	ft_render_header();
	while (i < 8 && this->_contacts[i].ft_get_info("first_name").size())
	{
		ft_render_row(std::to_string(i));
		ft_render_row(this->_contacts[i].ft_get_info("first_name"));
		ft_render_row(this->_contacts[i].ft_get_info("last_name"));
		ft_render_row(this->_contacts[i].ft_get_info("nickname"));
		std::cout << "|" << std::endl;
		i++;
	}
	if (i == 0)
		return;
	else
	{
		ft_print_bottom();
		this->ft_select_contact();
	}
}

void	PhoneBook::ft_select_contact()
{
	std::string input;

	while (1)
	{
		std::cout << "Please enter the contact index: \n";
		std::getline(std::cin, input); 

		if (input.length() == 0 || input.length() > 1 || !isdigit(input[0]) || std::stoi(input) < 0 || std::stoi(input) > 7
			|| this->_contacts[std::stoi(input)].ft_get_info("first_name").size() == 0)
			std::cout << "Please enter a valid index\n";
		else
		{
			ft_print_divider();
			std::cout << "First name: " << this->_contacts[std::stoi(input)].ft_get_info("first_name") << std::endl;
			ft_print_divider();
			std::cout << "Last name: " << this->_contacts[std::stoi(input)].ft_get_info("last_name") << std::endl;
			ft_print_divider();
			std::cout << "Nickname: " << this->_contacts[std::stoi(input)].ft_get_info("nickname") << std::endl;
			ft_print_divider();
			std::cout << "Phone number: " << this->_contacts[std::stoi(input)].ft_get_info("phone_number") << std::endl;
			ft_print_divider();
			std::cout << "Darkest secret: " << this->_contacts[std::stoi(input)].ft_get_info("darkest_secret") << std::endl;
			ft_print_divider();
			return;
		}
	}
}
