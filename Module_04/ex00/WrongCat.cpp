/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:13:11 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/17 11:02:41 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Defautl constructer called!" << std::endl;
}

WrongCat::WrongCat(WrongCat const & obj)
{
	std::cout << "WrongCat Copy constructer called!" << std::endl;
	*this = obj;
}

void	WrongCat::makeSound(void) const
{
	std::cout << type << " sound of wrong cat." << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & obj)
{
	std::cout << "WrongCat Copy assignement called!" << std::endl;
	this->type = obj.type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Default Destructer called!" << std::endl;
}
