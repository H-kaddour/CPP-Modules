/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:06:28 by hkaddour          #+#    #+#             */
/*   Updated: 2023/03/16 19:24:49 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
	std::cout << "BitcoinExchange Default constructor called!" << std::endl;
	this->fd_database.open("data.csv");
	if (!this->fd_database.is_open())
	{
		std::cerr << "Error can't open file of the database" << std::endl;
		//maybe here i should exit
	}
	std::string data;
	std::getline(this->fd_database, data);
	for (int i = 0; std::getline(this->fd_database, data); i++)
	{
		this->data.push_back(database());
		this->save_database(data, i);
	}
	this->fd_database.close();
}

//void	BitcoinExchange::parse_data(void)
//{
//	fd_database.open("l.csv");
//	if (!this->fd_database.is_open())
//	{
//		std::cerr << "Error can't open file of the database" << std::endl;
//		//maybe here i should exit
//	}
//	std::string data;
//	for (int i = 0; std::getline(this->fd_database, data); i++)
//	{
//		if (!i && data.compare("date,exchange_rate"))
//		{
//			std::getline(this->fd_database, data);
//			continue ;
//		}
//		//check_separater();
//		if (std::count(data.begin(), data.end(), '|') != 1)
//		{
//			//here error
//			exit(1);
//		}
//		//for (int i = 0; i < data.find('|'); i++)
//		//{}
//		if (std::count(data.begin(), data.begin() + data.find('|'), '-') != 2)
//		{
//			//here error
//			exit(1);
//		}
//		//here maybe make a vector and split and numbers and then check them one by one also first check if 
//	}
//}

void	BitcoinExchange::parse_input_file(std::string file)
{
	std::string	data;
	std::ifstream	input_file;

	input_file.open(file);
	if (!input_file.is_open())
	{
		std::cerr << "Error can't open file of the database" << std::endl;
		exit(1);
	}
	for (int	i = 0; std::getline(input_file, data); i++)
	{
		//std::cout << data.c_str()[data.length() - 1] << std::endl;
		//here trim the string and 
		for (int	i = 0; ; i++)
		{

		}
		exit(0);
		if (std::count(data.begin(), data.end(), '|') != 1 || \
				!isdigit(data.c_str()[0]) || !isdigit(data.c_str()[data.length() - 1]))
		{
			std::cout << "ll" << std::endl;
		}
		//exit(0);
		//if (!i && )
	}
}

void	BitcoinExchange::save_database(std::string data, int i)
{
	std::string hld;
	std::istringstream(data.substr(0, data.find('-'))) >> this->data[i].year;
	std::istringstream(data.substr(data.find('-') + 1, data.find('-') + 3)) >> this->data[i].month;
	std::istringstream(data.substr(data.find('-') + 4, data.find('-') + 6)) >> this->data[i].day;
	hld = data.substr(data.find(',') + 1, data.length());
	this->data[i].value = atof(hld.c_str());
}
	

BitcoinExchange::BitcoinExchange(BitcoinExchange const & obj)
{
	std::cout << "BitcoinExchange Copy constructor called!" << std::endl;
	*this = obj;
}

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const & obj)
{
	(void)obj;
	//here copy data of vecotor to the other object but i have first to allocate the vector
	std::cout << "BitcoinExchange Copy assignement called!" << std::endl;
	return (*this);
}

BitcoinExchange::~BitcoinExchange(void)
{
	std::cout << "BitcoinExchange Destructor called!" << std::endl;
}
