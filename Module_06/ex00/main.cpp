/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 20:13:13 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/28 14:45:00 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	to_char(av[1]);
	to_int(av[1]);
	to_fl_doub(0, av[1]);
	to_fl_doub(1, av[1]);
	return (0);
}