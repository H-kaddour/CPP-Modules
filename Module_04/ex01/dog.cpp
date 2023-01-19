/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:41:24 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/19 15:21:18 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog Defautl constructer called!" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(Dog const & obj)
{
	std::cout << "Dog Copy constructer called!" << std::endl;
	this->brain = new Brain();
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
	*this->brain = *obj.brain;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog Default Destructer called!" << std::endl;
	delete this->brain;
}
