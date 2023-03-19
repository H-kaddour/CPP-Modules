/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:06:41 by hkaddour          #+#    #+#             */
/*   Updated: 2023/03/19 13:39:56 by hkaddour         ###   ########.fr       */
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

struct	database
{
	//BitcoinExchange(void);
	//BitcoinExchange(BitcoinExchange const & obj);
	//BitcoinExchange & operator=(BitcoinExchange const & obj);
	//~BitcoinExchange(void);
	//maybe here i need constructor and other shiit
	int		year;
	int		month;
	int		day;
	double	value;
};

class	BitcoinExchange
{
	//std::vector<database>	data;
	//int		colum_database;
	std::map<std::string, double> data;
	std::ifstream	fd_database;
	public :
		BitcoinExchange(void);
		//i just took off const i will get it back ASAP
		BitcoinExchange(BitcoinExchange const & obj);
		BitcoinExchange & operator=(BitcoinExchange  const & obj);
		void	read_database(void);
		//void	parse_data(void);
		//void	save_database(std::string data, int i);
		void	parse_input_file(std::string file);

		~BitcoinExchange(void);
};
