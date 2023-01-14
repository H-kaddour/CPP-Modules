/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:37:00 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/13 12:05:32 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Defautl constructer called!" << std::endl;
}

Brain::Brain(Brain const & obj)
{
	(void)obj;
	std::cout << "Brain Copy constructer called!" << std::endl;
}

Brain & Brain::operator=(Brain const & obj)
{
	(void)obj;
	std::cout << "Brain Copy assignement called!" << std::endl;
	//this->type = obj.type;
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain Default Destructer called!" << std::endl;
}
