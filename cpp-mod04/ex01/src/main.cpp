/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:51:07 by pviegas           #+#    #+#             */
/*   Updated: 2024/04/16 11:59:47 by pviegas          ###   ########.fr       */
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
	Animal*	animals[animal_num];
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
	std::cout << "   ****************    Assignment tests...   ****************    " << std::endl;
	std::cout << std::endl;
	
	Dog Baruk;
	{
		std::cout << "Baruk" << std::endl;
		std::cout << "I'am a " << Baruk.getType() << " with an Idea: " << Baruk.think(0) << std::endl;
		std::cout << "My Sound is : ";
		Baruk.makeSound();
		std::cout << std::endl;
		
		Dog tmp = Baruk;
		std::cout << std::endl;
		std::cout << "tmp" << std::endl;
		std::cout << tmp.getType() << " Idea:  "<< tmp.think(99) << std::endl;	
		std::cout << "tmp Sound: ";
		tmp.makeSound();
		std::cout << std::endl;
	}

	std::cout << std::endl;

	Cat Lucky;
	{
		std::cout << "Lucky" << std::endl;
		std::cout << "I'am a " << Lucky.getType() << " with an Idea: " << Lucky.think(5) << std::endl;
		std::cout << "My Sound is : ";
		Lucky.makeSound();
		std::cout << std::endl;
		
		Cat tmp = Lucky;
		std::cout << std::endl;
		std::cout << "tmp" << std::endl;
		std::cout << tmp.getType() << " Idea:  "<< tmp.think(100) << std::endl;	
		std::cout << "tmp Sound: ";
		tmp.makeSound();
		std::cout << std::endl;
	}

	return (0);
}