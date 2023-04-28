/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:45:18 by hkaddour          #+#    #+#             */
/*   Updated: 2023/04/28 22:40:22 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	try
	{
		if (ac != 2)
			throw ("Error: invalid argument");
		calculate(parse_the_data(av[1]));
	}
	catch (const char *error)
	{
		std::cerr << error << std::endl;
		return (1);
	}
	return (0);
}
