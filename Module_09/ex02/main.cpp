/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:16:36 by hkaddour          #+#    #+#             */
/*   Updated: 2023/04/28 21:16:12 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	int	*nbr = new int[ac - 1];
	try
	{
		if (ac < 2)
			throw ("Error: invalid argument!");
		parsing(ac - 1, av + 1, &nbr);
		sorting(ac - 1, nbr);
		delete [] nbr;
		return (0);
	}
	catch (const char *error)
	{
		std::cout << error << std::endl;
		delete [] nbr;
		return (1);
	}
}
