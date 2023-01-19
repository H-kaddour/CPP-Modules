/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:37:00 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/17 13:05:30 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Defautl constructer called!" << std::endl;
}

Brain::Brain(Brain const & obj)
{
	std::cout << "Brain Copy constructer called!" << std::endl;
	*this = obj;
}

Brain & Brain::operator=(Brain const & obj)
{
	std::cout << "Brain Copy assignement called!" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain Default Destructer called!" << std::endl;
}
