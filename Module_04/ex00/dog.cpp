/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:41:24 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/12 23:40:00 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog Defautl constructer called!" << std::endl;
}

Dog::Dog(Dog const & obj)
{
	std::cout << "Dog Copy constructer called!" << std::endl;
	*this = obj;
}

void	Dog::makeSound(void) const
{
	std::cout << type << " sound is barking 🐶." << std::endl;
}

Dog & Dog::operator=(Dog const & obj)
{
	std::cout << "Dog Copy assignement called!" << std::endl;
	this->type = obj.type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog Default constructer called!" << std::endl;
}
