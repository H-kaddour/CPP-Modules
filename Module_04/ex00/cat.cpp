/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:41:22 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/17 12:47:00 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat Defautl constructer called!" << std::endl;
}

Cat::Cat(Cat const & obj)
{
	std::cout << "Cat Copy constructer called!" << std::endl;
	*this = obj;
}

void	Cat::makeSound(void) const
{
	std::cout << type << " sound is meowing 🐱." << std::endl;
}

Cat & Cat::operator=(Cat const & obj)
{
	std::cout << "Cat Copy assignement called!" << std::endl;
	this->type = obj.type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat Default Destructer called!" << std::endl;
}
