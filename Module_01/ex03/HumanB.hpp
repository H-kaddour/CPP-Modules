/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:26:02 by hkaddour          #+#    #+#             */
/*   Updated: 2022/11/22 14:11:16 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#	include "Weapon.hpp"

class Weapon;
class HumanB
{
	std::string	name;
	Weapon	*weapon;
	public:
		HumanB(std::string _name);
		~HumanB(void);
		void	setWeapon(Weapon &club);
		void	attack(void);
};
