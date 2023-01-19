/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:42:38 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/19 15:20:56 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal Defautl constructer called!" << std::endl;
}

Animal::Animal(std::string name) : type(name)
{
	std::cout << "Animal Init constructer called!" << std::endl;
}

Animal::Animal(Animal const & obj)
{
	std::cout << "Animal Copy constructer called!" << std::endl;
	*this = obj;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << type << " have a lot of sound none specify." << std::endl;
}

Animal & Animal::operator=(Animal const & obj)
{
	std::cout << "Animal Copy assignement called!" << std::endl;
	this->type = obj.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal Default Destructer called!" << std::endl;
}
