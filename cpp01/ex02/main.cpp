/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:51:09 by ncampbel          #+#    #+#             */
/*   Updated: 2024/10/31 16:08:12 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main( void )
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *strPTR = &str; // a refference is an alias to another variable
	std::string	&strREF = str; // literally a pointer to the address

	std::cout << "Memory address of str: " << &str << std::endl;
	std::cout << "Memory address hold by strPTR: " << strPTR << std::endl;
	std::cout << "Memory address hold by strREF: " << &strREF << std::endl;

	std::cout << "------------------------------------------------" << std::endl;

	std::cout << "Value of string: " << str << std::endl;
	std::cout << "Value pointed to by strPTR: " << *strPTR << std::endl;
	std::cout << "Value pointed to by strREF: " << strREF << std::endl;
}