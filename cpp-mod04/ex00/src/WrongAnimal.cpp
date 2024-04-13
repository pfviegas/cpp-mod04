/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:09:42 by pviegas           #+#    #+#             */
/*   Updated: 2024/04/13 12:12:07 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"


// Default Constructor
WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal: Default constructor called" << std::endl;
};

// Parameterized Constructor
WrongAnimal::WrongAnimal( std::string type )
{
	this->_type = type;
	std::cout << "WrongAnimal: Parameterized constructor called" << std::endl;
};

// Copy Constructor
WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
	*this = other;
};

// Copy Assignment Operator
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal: Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
};

// Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Destructor called for " << this->_type << std::endl;
};

//Member function
void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal: Grrr... Ffff..." << std::endl;
};

// Getter
std::string WrongAnimal::getType() const
{
	return (_type);
};
