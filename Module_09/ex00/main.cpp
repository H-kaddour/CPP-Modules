/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:06:02 by hkaddour          #+#    #+#             */
/*   Updated: 2023/03/16 17:25:28 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Erro\nUsage: ./btc file" << std::endl;
		return (1);
	}
	BitcoinExchange g;

	g.parse_input_file(av[1]);
	return (0);
}
