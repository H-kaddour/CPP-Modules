/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:22:59 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/11 13:10:58 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{
	std::string Name;
	public:
		DiamondTrap(void);
		DiamondTrap(const DiamondTrap & obj);
		DiamondTrap(std::string _Name);
		~DiamondTrap(void);
		void	whoAmI(void);
		DiamondTrap & operator=(const DiamondTrap & obj);
};
