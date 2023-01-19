/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:12:07 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/15 11:27:00 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "amateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria Default constructer called!" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria Init constructer called!" << std::endl;
}

void	AMatera::use(ICharacter & target)
{
	std::cout << "No use specify" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria Default Destructer called!" << std::endl;
}
