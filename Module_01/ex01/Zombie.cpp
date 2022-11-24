/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:30:50 by hkaddour          #+#    #+#             */
/*   Updated: 2022/11/21 11:31:41 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

void	Zombie::setter(std::string _name)
{
	name = _name;
}

void	Zombie::announce(void)
{
	std::cout << name << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Deconstructed is called" << std::endl;
}
