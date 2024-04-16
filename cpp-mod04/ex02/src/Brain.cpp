/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:19:10 by pviegas           #+#    #+#             */
/*   Updated: 2024/04/16 13:25:12 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>

#include "../include/Brain.hpp"

// Default Constructor
Brain::Brain()
{
	std::cout << "Brain: Default constructor called" << std::endl;
	for(int i = 0; i < 100; i++)
	{
		std::stringstream idea;
		idea << "Idea " << i;
		this->_ideas[i] = idea.str();
	}
	std::cout << std::endl;
};

// Copy Constructor
Brain::Brain(const Brain& other)
{
	std::cout << "Brain: Copy constructor called" << std::endl;
	*this = other;
};

// Copy Assignment Operator
Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain: Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		for(int i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i];
	}
	return (*this);
};

// Destructor
Brain::~Brain()
{
	std::cout << "Brain: Destructor called" << std::endl;
};

//Member function
std::string Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
	{
		return (this->_ideas[index]);
	} else
	{
		return "";
	}
}