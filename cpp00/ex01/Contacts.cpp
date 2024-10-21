/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:04:29 by ncampbel          #+#    #+#             */
/*   Updated: 2024/09/24 14:11:28 by ncampbel         ###   ########.fr       */
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
	if (info.compare("first_name") == 0)
		std::getline(std::cin, this->_f_name);
	else if (info.compare("last_name") == 0)
		std::getline(std::cin, this->_l_name);
	else if (info.compare("nickname") == 0)
		std::getline(std::cin, this->_n_name);
	else if (info.compare("phone_number") == 0)
		std::getline(std::cin, this->_p_number);
	else if (info.compare("darkest_secret") == 0)
		std::getline(std::cin, this->_d_secret);
}