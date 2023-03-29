/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:16:36 by hkaddour          #+#    #+#             */
/*   Updated: 2023/03/25 13:16:48 by hkaddour         ###   ########.fr       */
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
	}
	catch (const char *error)
	{
		std::cerr << error << std::endl;
		delete [] nbr;
	}
	return (0);
}
