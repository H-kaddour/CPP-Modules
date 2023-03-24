/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:16:36 by hkaddour          #+#    #+#             */
/*   Updated: 2023/03/24 17:22:56 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	int *nbr = 0;
	try
	{
		//one number fix
		if (ac < 2)
			throw ("Error: invalid argument!");
		nbr = parsing(ac - 1, av + 1);
		//sorting(ac - 1, av + 1);
		sorting(ac - 1, nbr);
		//here delete nbr
	}
	catch (const char *error)
	{
		std::cerr << error << std::endl;
		if (nbr)
			delete nbr;
		return (1);
	}
	return (0);
}
