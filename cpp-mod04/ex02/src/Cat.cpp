/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:33:28 by pviegas           #+#    #+#             */
/*   Updated: 2024/04/16 13:26:35 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

// Default Constructor
Cat::Cat()
{
	std::cout << "Cat: Default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
};

// Copy Constructor
Cat::Cat(const Cat& other) : Animal(), _brain(NULL)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	*this = other;
};

// Copy Assignment Operator
Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat: Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
};

// Destructor
Cat::~Cat()
{
	std::cout << "Cat: Destructor called" << std::endl;
	delete this->_brain;
};

//Member function
void Cat::makeSound() const
{
	std::cout << "Meow !!!" << std::endl;
};

// Method for accessing Cat's brain ideas
std::string Cat::think(int index) const
{
	if (this->_brain != NULL)
		return (this->_brain->getIdea(index));
	else
		return "";
}
