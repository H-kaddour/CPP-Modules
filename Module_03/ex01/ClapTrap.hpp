/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 13:01:31 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/11 12:24:34 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class ClapTrap
{
	protected:
		std::string	Name;
		int	Hit_point;
		int	Energy_points;
		int	Attack_damage;
	public:
		ClapTrap(void);
		ClapTrap(std::string _Name);
		ClapTrap(const ClapTrap & obj);
		ClapTrap(std::string _Name, int Hp, int Ep, int Ad);
		~ClapTrap(void);
		void	Attack_setter(int value);
		std::string	Name_getter(void);
		int		Attack_getter(void);
		void	attack(const std::string & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		ClapTrap & operator=(const ClapTrap & obj);
};
