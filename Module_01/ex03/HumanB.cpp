/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:17:02 by hkaddour          #+#    #+#             */
/*   Updated: 2022/11/22 14:18:02 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name) {}

void	HumanB::attack(void)
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &club)
{
	weapon = &club;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB Deconstructer is called." << std::endl;
}
