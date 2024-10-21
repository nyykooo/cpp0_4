/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:27:44 by ncampbel          #+#    #+#             */
/*   Updated: 2024/09/24 15:08:37 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contacts.hpp"

class PhoneBook {
	private:
		Contact _contacts[8];
		int		_index;

	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	ft_add_contact();
		void	ft_search_contact();
		void	ft_select_contact();
};

#endif