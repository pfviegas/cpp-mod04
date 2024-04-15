/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:01:28 by pviegas           #+#    #+#             */
/*   Updated: 2024/04/15 16:33:51 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

// Default Constructor
Cat::Cat()
{
	std::cout << "Cat: Default constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
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
	delete _brain;
};

//Member function
void Cat::makeSound() const
{
	std::cout << _type << ": Meow !!!" << std::endl;
};

// Method for accessing Cat's brain ideas
std::string Cat::getIdea(int index) const
{
	if (_brain != NULL)
		return _brain->getIdea(index);
	else
		return "";
}
