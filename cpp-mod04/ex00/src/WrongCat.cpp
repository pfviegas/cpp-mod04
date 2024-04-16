/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:38:01 by pviegas           #+#    #+#             */
/*   Updated: 2024/04/16 13:53:37 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

// Default Constructor
WrongCat::WrongCat()
{
	std::cout << "WrongCat: Default constructor called" << std::endl;
	this->_type = "WrongCat";
};

// Copy Constructor
WrongCat::WrongCat(const WrongCat& other) : WrongAnimal()
{
	std::cout << "WrongCat: Copy constructor called" << std::endl;
	*this = other;
};

// Copy Assignment Operator
WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat: Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
};

// Destructor
WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destructor called" << std::endl;
};

//Member function
void WrongCat::makeSound() const
{
	std::cout << this->_type << ": Meow !!!" << std::endl;
};
