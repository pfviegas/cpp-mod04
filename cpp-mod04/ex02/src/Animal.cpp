/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:51:12 by pviegas           #+#    #+#             */
/*   Updated: 2024/04/16 11:37:35 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

// Default Constructor
Animal::Animal()
{
	std::cout << "Animal: Default constructor called" << std::endl;
};

// Parameterized Constructor
Animal::Animal( std::string type )
{
	std::cout << "Animal: Parameterized constructor called - " << type << std::endl;
	this->_type = type;
};


// Copy Constructor
Animal::Animal(const Animal& other)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
	*this = other;
};

// Copy Assignment Operator
Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal: Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
};

// Destructor
Animal::~Animal()
{
	std::cout << "Animal: Destructor called for " << this->_type << std::endl;
};

//Member function
void Animal::makeSound() const
{
	std::cout << "Grrr... Ffff..." << std::endl;
};

// Getter
std::string Animal::getType() const
{
	return (this->_type);
}