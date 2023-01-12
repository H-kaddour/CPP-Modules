/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:26:12 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/11 13:24:01 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap Default constructer called!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & obj)
{
	std::cout << "DiamondTrap Copy constructer called." << std::endl;
	*this = obj;
}

DiamondTrap::DiamondTrap(std::string _Name) : ClapTrap(_Name + "_clap_name", 100, 50, 30), \
																								ScavTrap(_Name), FragTrap(_Name), Name(_Name)
{
	std::cout << "DiamondTrap Init var constructer called!" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & obj)
{
	this->Name = obj.Name;
	this->Hit_point = obj.Hit_point;
	this->Energy_points = obj.Energy_points;
	this->Attack_damage = obj.Attack_damage;
	std::cout << "DiamondTrap Copy assignment operator called." << std::endl;

	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Who am i: I'am " << Name << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructer called!" << std::endl;
}
