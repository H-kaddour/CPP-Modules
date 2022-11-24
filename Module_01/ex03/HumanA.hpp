/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:26:00 by hkaddour          #+#    #+#             */
/*   Updated: 2022/11/22 14:11:06 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#	include "Weapon.hpp"

class Weapon;
class HumanA
{
	std::string	name;
	Weapon	&weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void	attack(void);
};
