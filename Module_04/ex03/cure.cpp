/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:35:16 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/15 11:43:36 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cure.hpp"

Cure::Cure(void)
{
	std::cout << "Cure Default constructer called!" << std::endl;
}

void	Cure::use(ICharacter & target)
{
	std::cout << "* heals " << "<here name>" << "’s wounds *" << std::endl;
}

Cure * Cure::clone(void) const
{

}

Cure::~Cure(void)
{
	std::cout << "Cure Default Destructer called!" << std::endl;
}
