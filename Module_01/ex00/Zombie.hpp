/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 12:47:28 by hkaddour          #+#    #+#             */
/*   Updated: 2022/11/21 11:39:21 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Zombie
{
	std::string	name;
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
};

Zombie* newZombie(std::string name);
void		randomChump(std::string name);
