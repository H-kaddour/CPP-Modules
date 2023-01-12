/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 12:37:39 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/11 13:02:56 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap Default constructer called." << std::endl;
}

ClapTrap::ClapTrap(std::string _Name, int Hp, int Ep, int Ad) \
		: Name(_Name), Hit_point(Hp), Energy_points(Ep), Attack_damage(Ad)
{
	std::cout << "ClapTrap Base class constructer called!" << std::endl;
}

ClapTrap::ClapTrap(std::string _Name) : Name(_Name),\
		Hit_point(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "ClapTrap Init variables constructer called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & obj)
{
	std::cout << "ClapTrap Copy constructer called." << std::endl;
	*this = obj;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & obj)
{
	this->Name = obj.Name;
	this->Hit_point = obj.Hit_point;
	this->Energy_points = obj.Energy_points;
	this->Attack_damage = obj.Attack_damage;
	std::cout << "ClapTrap Copy assignment operator called." << std::endl;

	return (*this);
}

std::string	ClapTrap::Name_getter(void)
{
	return (this->Name);
}

int	ClapTrap::Attack_getter(void)
{
	return (this->Attack_damage);
}

void	ClapTrap::Attack_setter(int value)
{
	if (value <= 0)
		this->Attack_damage = 0;
	else
		this->Attack_damage = value;
}

void	ClapTrap::attack(const std::string & target)
{
	if (this->Energy_points != 0 && this->Attack_damage != 0)
	{
		std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing ";
		std::cout << this->Attack_damage << " points of damage!" << std::endl;
		this->Energy_points--;
	}
	else
		std::cout << "You can't attack :v" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!amount || !this->Hit_point)
	{
		std::cout << "Can't take damage" << std::endl;
		return ;
	}
	if (amount > (unsigned int)this->Hit_point)
		this->Hit_point = 0;
	else
	{
		this->Hit_point -= amount;
		std::cout << this->Name << " took damage of " << amount << " points" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Energy_points != 0)
	{
		std::cout << "ClapTrap " << this->Name << " repairs " << amount;
		std::cout << " points back." << std::endl;
		this->Hit_point += amount;
		this->Energy_points--;
	}
	else
		std::cout << "You can't repair cuz u have 0 Energy points." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructer called." << std::endl;
}
