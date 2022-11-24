/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 12:35:48 by hkaddour          #+#    #+#             */
/*   Updated: 2022/11/21 11:41:23 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *zomb = newZombie("Heap_Zombie");
	zomb->announce();
	randomChump("Stack_Zombie");
	delete zomb;
}
