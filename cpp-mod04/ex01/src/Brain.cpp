/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:15:10 by pviegas           #+#    #+#             */
/*   Updated: 2024/04/15 12:22:18 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>

#include "../include/Brain.hpp"

// Default Constructor
Brain::Brain()
{
	std::stringstream idea;
	std::cout << "Brain: Default constructor called" << std::endl;
	for(int i = 0; i < 100; i++)
	{
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
		for(int i = 0; i <= 100; i++)
			this->_ideas[i] = other._ideas[i];
	}
	return (*this);
};

// Destructor
Brain::~Brain()
{
	std::cout << "Brain: Destructor called" << std::endl;
};