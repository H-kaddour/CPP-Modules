/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:37:38 by hkaddour          #+#    #+#             */
/*   Updated: 2022/11/21 11:43:35 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Deconstructer " << name << " Called" << std::endl;
}
