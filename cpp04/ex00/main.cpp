/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:36:17 by ncampbel          #+#    #+#             */
/*   Updated: 2024/11/08 19:39:59 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes.hpp"

int main()
{
	const Animal* meta = new Animal;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	return 0;
}