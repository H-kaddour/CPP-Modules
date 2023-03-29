/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:45:18 by hkaddour          #+#    #+#             */
/*   Updated: 2023/03/27 21:09:15 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
//here fix 9 8 * * 3 always check the stack size before doing an operation for error handling
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
