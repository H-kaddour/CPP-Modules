/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:00:42 by hkaddour          #+#    #+#             */
/*   Updated: 2022/11/21 11:37:00 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Zombie
{
	std::string	name;
	public:
		Zombie(void);
		~Zombie(void);
		void	setter(std::string _name);
		void	announce(void);
};

Zombie	*zombieHorde(int N, std::string name);
