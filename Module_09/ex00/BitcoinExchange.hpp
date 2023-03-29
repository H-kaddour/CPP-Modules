/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:06:41 by hkaddour          #+#    #+#             */
/*   Updated: 2023/03/25 13:42:54 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <map>

class	BitcoinExchange
{
	std::map<std::string, double> data;
	std::ifstream	fd_database;
	public :
		BitcoinExchange(void);
		BitcoinExchange(BitcoinExchange const & obj);
		BitcoinExchange & operator=(BitcoinExchange  const & obj);
		void	read_database(void);
		void	parse_input_file(std::string file);
		~BitcoinExchange(void);
};
