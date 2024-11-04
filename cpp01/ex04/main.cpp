/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:11:43 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/04 13:34:25 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

bool ft_find_word(std::string &line, std::string word)
{
	size_t position = line.find(word);
	if (position != std::string::npos) // se a palavra nao for encontrada retorna npos
		return (true);
	else
		return (false);
}

void ft_replace_word(std::string &line, std::string word, std::string replace, size_t position)
{
	std::string new_line;
	new_line = line.substr(0, position);
	new_line += replace;
	new_line += line.substr(position + word.length());
	line = new_line;
}

int main( int ac, char **av )
{
	if (ac != 4)
	{
		std::cerr << "Error: Invalid arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	
	std::string	name = av[1];
	std::ifstream fileName(name);
	if (!fileName.is_open())
	{
		std::cerr << "Erro: can't open filename" << std::endl;
		return (EXIT_FAILURE);
	}
	
	std::string	new_name = ".replace";
	std::ofstream newFile(name.append(new_name));
	if (!newFile.is_open())
	{
		std::cerr << "Erro: can't open or create newFile" << std::endl;
		return (EXIT_FAILURE);
	}
	
	std::ostringstream buffer;
	buffer << fileName.rdbuf();
	std::string line = buffer.str();

	std::string word = av[2];
	std::string replace = av[3];
	size_t position = 0;
	while ((position = line.find(word, position)) != std::string::npos)
	{
		ft_replace_word(line, word, replace, position);
		position += replace.length();
	}
	
	newFile << line;

	fileName.close();
	newFile.close();

	std::cout << "File copied word by word and " << av[2] << " replaced by " << av[3] << std::endl;
	return (EXIT_SUCCESS);
}
