/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:14:07 by hkaddour          #+#    #+#             */
/*   Updated: 2022/11/22 14:14:58 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
	setType(_type);
}

std::string	&Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(std::string _type)
{
	this->type = _type;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon Deconstructer is called." << std::endl;
}
