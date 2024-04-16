/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:51:07 by pviegas           #+#    #+#             */
/*   Updated: 2024/04/16 15:47:36 by pviegas          ###   ########.fr       */
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
		
		std::cout << "Animal Type: " << animal->getType() << " " << std::endl;
		std::cout << "   Dog Type: " << dog->getType() << " " << std::endl;
		std::cout << "   Cat Type: " << cat->getType() << " " << std::endl;
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

		std::cout << "Animal Type: " << animal->getType() << " " << std::endl;
		std::cout << "   cat Type: " << cat->getType() << " " << std::endl;
		std::cout << std::endl;
		
		animal->makeSound();
		cat->makeSound();
		std::cout << std::endl;

		WrongCat cat1;
		std::cout << std::endl;
		cat1.makeSound();
		std::cout << std::endl;
		WrongCat* cat2 = new WrongCat();
		std::cout << std::endl;
		cat2->makeSound();
		std::cout << std::endl;
		delete cat2;
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