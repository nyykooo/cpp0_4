/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:47:14 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/21 19:51:28 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_source[4];
		int _count;
		int _max;
	public:
		MateriaSource();
		MateriaSource(MateriaSource const & copy);
		MateriaSource & operator=(MateriaSource const & copy);
		~MateriaSource();

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

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

#endif