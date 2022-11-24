/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:31:38 by hkaddour          #+#    #+#             */
/*   Updated: 2022/11/22 14:11:00 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#	include <iostream>

class Weapon
{
	std::string	type;
	public:
		Weapon(std::string _type);
		~Weapon(void);
		std::string &getType(void);
		void	setType(std::string _type);
};
