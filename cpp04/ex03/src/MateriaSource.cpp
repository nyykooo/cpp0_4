/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 23:23:47 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/22 00:08:13 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_count = 0;
	_max = 4;
	for (int i = 0; i < _max; i++)
		_source[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & copy)
{
	*this = copy;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & copy)
{
	if (this != &copy)
	{
		_count = copy._count;
		_max = copy._max;
		for (int i = 0; i < _count; i++)
			delete _source[i];
		for (int i = 0; i < _count; i++)
			_source[i] = copy._source[i];
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < _count; i++)
	{
		if (_source[i])
			delete _source[i];
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (_count < _max)
	{
		_source[_count] = m;
		_count++;
	}
	else
		std::cout << "📚 MateriaSource is full! 📚" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < _count; i++)
	{
		if (_source[i]->getType() == type)
			return (_source[i]->clone());
	}
	return (0);
}