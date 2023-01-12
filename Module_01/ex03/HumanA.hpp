/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:26:00 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/12 15:39:49 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#	include "Weapon.hpp"

class HumanA
{
	std::string	name;
	Weapon	&weapon;
	public:
		HumanA(std::string name, Weapon & weapon);
		~HumanA(void);
		void	attack(void);
};
