/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:41:17 by pviegas           #+#    #+#             */
/*   Updated: 2024/04/15 17:04:54 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

// Default Constructor
Dog::Dog()
{
	std::cout << "Dog: Default constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
};

// Copy Constructor
Dog::Dog(const Dog& other) : Animal(), _brain(NULL)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	*this = other;
};

// Copy Assignment Operator
Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog: Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain (*other._brain);
	}
	return (*this);
};

// Destructor
Dog::~Dog()
{
	std::cout << "Dog: Destructor called" << std::endl;
	delete _brain;
};

//Member function
void Dog::makeSound() const
{
	std::cout << "Bark !!!" << std::endl;
};

// Method for accessing Dog's brain ideas
std::string Dog::getIdea(int index) const
{
	if (_brain != NULL)
		return _brain->getIdea(index);
	else
		return "";
}