/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:51:07 by pviegas           #+#    #+#             */
/*   Updated: 2024/04/16 13:14:27 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"


int	main() 
{
	Dog		Baruk;
	Cat		Lucky;
//	Animal	Animal;

	std::cout << "I'am a " << Baruk.getType() << " and I ";
	Baruk.makeSound();
		
	std::cout << "I'am a " << Lucky.getType() << " and I ";
	Lucky.makeSound();
	std::cout << std::endl;
	
	std::cout << "Baruk's Idea: " << Baruk.think(5) << std::endl;
	std::cout << "Lucky's Idea: "  << Lucky.think(50) << std::endl;
	std::cout << std::endl;

	return 0;
}