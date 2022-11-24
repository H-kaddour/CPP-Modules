/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:55:44 by hkaddour          #+#    #+#             */
/*   Updated: 2022/11/21 11:32:38 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	{
		Zombie	*zombie = zombieHorde(10, "hicham");
		for (int i = 0; i < 10; i++)
			zombie[i].announce();
		delete [] zombie;
	}
	system("leaks moar_brainz");
}
