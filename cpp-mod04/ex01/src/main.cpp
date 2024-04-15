/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:51:07 by pviegas           #+#    #+#             */
/*   Updated: 2024/04/15 12:45:30 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"


int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;	//should not create a leak
	delete i;

	int		animal_num = 10;
	Animal	*animals[animal_num];
	int		k = 0;

	while (k < (animal_num / 2))
		animals[k++] = new Dog();
	while (k < animal_num)
		animals[k++] = new Cat();

	animals[4]->makeSound();
	animals[8]->makeSound();
	std::cout << std::endl;
	
	for (k = 0; k < animal_num; k++)
		delete animals[k];

	std::cout << std::endl;
	std::cout << "Assignment tests..." << std::endl;
	std::cout << std::endl;
	
	Dog Baruk;
	{
		Dog tmp = Baruk;
	}

	Cat Lucky;
	{
		Cat tmp = Lucky;
	}

	return (0);
}