/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:13:59 by pviegas           #+#    #+#             */
/*   Updated: 2024/04/15 16:31:20 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

#include "../include/Animal.hpp"

class Brain
{
	public:
		Brain();
		Brain( const Brain& other );
		Brain& operator=( const Brain& other );
		~Brain();

		std::string getIdea(int index) const;
		
	private:
		std::string _ideas[100];
};

#endif