/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:16:18 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/17 11:03:14 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
	std::cout << "WrongAnimal Defautl constructer called!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name) : type(name)
{
	std::cout << "WrongAnimal Init constructer called!" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & obj)
{
	std::cout << "WrongAnimal Copy constructer called!" << std::endl;
	*this = obj;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << type << " sound of wrong animal." << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & obj)
{
	std::cout << "WrongAnimal Copy assignement called!" << std::endl;
	this->type = obj.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Default Destructer called!" << std::endl;
}
