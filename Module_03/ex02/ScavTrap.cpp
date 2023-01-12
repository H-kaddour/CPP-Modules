/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:11:43 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/11 12:39:56 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap Default constructer called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & obj)
{
	std::cout << "ScavTrap Copy constructer called." << std::endl;
	*this = obj;
}

ScavTrap::ScavTrap(std::string _Name) : ClapTrap(_Name, 100, 50, 20)
{
	std::cout << "ScavTrap Init var constructer called!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

void	ScavTrap::attack(const std::string & target)
{
	if (this->Energy_points != 0 && this->Attack_damage != 0)
	{
		std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing ";
		std::cout << this->Attack_damage << " points of damage!" << std::endl;
		this->Energy_points--;
	}
	else
		std::cout << "You can't attack :v" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & obj)
{
	this->Name = obj.Name;
	this->Hit_point = obj.Hit_point;
	this->Energy_points = obj.Energy_points;
	this->Attack_damage = obj.Attack_damage;
	std::cout << "ScavTrap Copy assignment operator called." << std::endl;

	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Default destructer!" << std::endl;
}
