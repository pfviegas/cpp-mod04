/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:01:28 by pviegas           #+#    #+#             */
/*   Updated: 2024/04/16 13:15:47 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

// Default Constructor
Cat::Cat()
{
	std::cout << "Cat: Default constructor called" << std::endl;
	this->_type = "Cat";
};

// Copy Constructor
Cat::Cat(const Cat& other) : Animal()
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
};

//Member function
void Cat::makeSound() const
{
	std::cout << this->_type << ": Meow !!!" << std::endl;
};