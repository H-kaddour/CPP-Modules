/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:59:42 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/11 12:44:42 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Default constructer called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap & obj)
{
	std::cout << "FragTrap Copy constructer called." << std::endl;
	*this = obj;
}

FragTrap::FragTrap(std::string _Name) : ClapTrap(_Name, 100, 100, 30)
{
	std::cout << "FragTrap Init var constructer called!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High fives request 👋." << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & obj)
{
	this->Name = obj.Name;
	this->Hit_point = obj.Hit_point;
	this->Energy_points = obj.Energy_points;
	this->Attack_damage = obj.Attack_damage;
	std::cout << "FragTrap Copy assignment operator called." << std::endl;

	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Default destructer called!" << std::endl;
}
