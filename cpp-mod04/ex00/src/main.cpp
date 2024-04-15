/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:51:07 by pviegas           #+#    #+#             */
/*   Updated: 2024/04/13 13:26:27 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int main()
{
	{
		const Animal* animal = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();
		std::cout << std::endl;
		
		std::cout << "Type: " << animal->getType() << " " << std::endl;
		std::cout << "Type: " << dog->getType() << " " << std::endl;
		std::cout << "Type: " << cat->getType() << " " << std::endl;
		std::cout << std::endl;
		
		animal->makeSound();
		cat->makeSound();
		dog->makeSound();
		std::cout << std::endl;

		delete animal;
		delete dog;
		delete cat;
	}
	{
		std::cout << std::endl;
		std::cout << " *************** Wrong Animal *************** " << std::endl;
		std::cout << std::endl;
		const WrongAnimal* animal = new WrongAnimal();
		const WrongAnimal* cat = new WrongCat();
		std::cout << std::endl;

		std::cout << "Type: " << animal->getType() << " " << std::endl;
		std::cout << "Type: " << cat->getType() << " " << std::endl;
		std::cout << std::endl;
		
		cat->makeSound();
		animal->makeSound();
		std::cout << std::endl;

		delete animal;
		delete cat;
	}
	return (0);
}

/*
int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	return 0;
}
*/