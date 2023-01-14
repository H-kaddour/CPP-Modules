/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:55:44 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/13 16:02:10 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	{
		int	size = 10;
		Zombie	*zombie = zombieHorde(size, "Zombie");
		for (int i = 0; i < size; i++)
			zombie[i].announce();
		delete [] zombie;
	}
	system("leaks moar_brainz");
}
