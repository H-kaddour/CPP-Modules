/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:27:45 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/15 11:42:24 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ice.hpp"

Ice::Ice(void)
{
	std::cout << "Ice Default constructer called!" << std::endl;
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << "<here name>" << " *" << std::endl;
}

Ice * Ice::clone(void) const
{

}

Ice::~Ice(void)
{
	std::cout << "Ice Default Destructer called!" << std::endl;
}
