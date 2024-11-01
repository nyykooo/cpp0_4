/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:04:29 by ncampbel          #+#    #+#             */
/*   Updated: 2024/10/28 17:24:29 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

Contact::Contact() {
}

Contact::~Contact() {
}

std::string	Contact::ft_get_info(std::string info) {
	if (info.compare("first_name") == 0)
		return (this->_f_name);
	else if (info.compare("last_name") == 0)
		return (this->_l_name);
	else if (info.compare("nickname") == 0)
		return (this->_n_name);
	else if (info.compare("phone_number") == 0)
		return (this->_p_number);
	else if (info.compare("darkest_secret") == 0)
		return (this->_d_secret);
	else
		return ("");
}

void	Contact::ft_set_info(std::string info)
{
	std::string input;
	size_t		position;
	
	while (1)
	{		
		if (!std::getline(std::cin, input))
			return;
		if (input.empty())
			std::cerr << "Empty field not valid! Please, try again." << std::endl;
		else if (info.compare("phone_number") == 0 && \
		(input.length() != 9 || !ft_check_number(input)))
			std::cerr << "Invalid phone number! Please, try again." << std::endl;
		else
			break;
	}
	if (info.compare("darkest_secret") != 0)
	{
		position = input.find_first_of(" \t\n\v\f\r");
		if (position != std::string::npos) // caso nao encontre os whitespaces
			input.erase(position, input.length());
		if (info.compare("first_name") == 0)
			_f_name = input;
		else if (info.compare("last_name") == 0)
			_l_name = input;
		else if (info.compare("nickname") == 0)
			_n_name = input;
		else if (info.compare("phone_number") == 0)
			_p_number = input;
	}
	else
		_d_secret = input;
}