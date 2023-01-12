/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 12:42:09 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/11 13:08:47 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const ScavTrap & obj);
		ScavTrap(std::string _Name);
		~ScavTrap(void);
		void	guardGate(void);
		void	attack(const std::string & target);
		ScavTrap & operator=(const ScavTrap & obj);
};
