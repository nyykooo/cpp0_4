/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:11:43 by ncampbel          #+#    #+#             */
/*   Updated: 2024/09/26 15:04:26 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main( int ac, char **av )
{
	if (ac != 4)
	{
		std::cerr << "Error: Invalid arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	
	std::ifstream fileName(av[1]);
	if (!fileName.is_open())
	{
		std::cerr << "Erro: can't open filename" << std::endl;
		return (EXIT_FAILURE);
	}
	
	std::ofstream newFile("newFile.txt");
	if (!newFile.is_open())
	{
		std::cerr << "Erro: can't open or create newFile" << std::endl;
		return (EXIT_FAILURE);
	}

	std::string	word;
	while (fileName >> word)
	{
		if (word.compare(av[2]) == 0)
			word = av[3];
		newFile << word << " ";
	}

	fileName.close();
	newFile.close();

	std::cout << "File copied word by word and " << av[2] << " replaced by " << av[3] << std::endl;
	return (EXIT_SUCCESS);
}
