/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:26:53 by ncampbel          #+#    #+#             */
/*   Updated: 2024/09/24 15:08:50 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP

# include <iostream>
# include <string>

class Contact {
	private:
		std::string _f_name;
		std::string _l_name;
		std::string _n_name;
		std::string _p_number;
		std::string _d_secret;

	public:
		Contact();
		~Contact();
		std::string	ft_get_info(std::string info);
		void 		ft_set_info(std::string info);	
};

#endif