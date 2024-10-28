/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:00:21 by ncampbel          #+#    #+#             */
/*   Updated: 2024/10/28 17:18:06 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS
# define UTILS

# include <iostream>
# include <string>

void	ft_print_mid();
void	ft_print_top();
void	ft_print_bottom();
void	ft_print_divider();
void	ft_render_header();
void	ft_render_row(std::string str);
bool	ft_check_number(std::string number);

#endif