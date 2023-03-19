/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:06:28 by hkaddour          #+#    #+#             */
/*   Updated: 2023/03/19 13:41:09 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string	trim_string(std::string data)
{
	int	start = 0;
	int	end = data.length() - 1;

	while (isspace(data.c_str()[start]) || isspace(data.c_str()[end]))
	{
		if (isspace(data.c_str()[start]))
			start++;
		if (isspace(data.c_str()[end]))
			end--;
	}
	return (data.substr(start, end - start + 1));
}

std::string	split(std::string &data, char c)
{
	std::string	hold;

	hold = data.substr(0, data.find(c));
	data = data.substr(data.find(c) + 1, data.length());
	return (hold);
}

int	check_if_digit(std::string nbr)
{
	for (unsigned long j = 0; j < nbr.length(); j++)
	{
		if (!isdigit(nbr.c_str()[j]))
			return (1);
	}
	return (0);
}

void	date_value_check(std::pair<std::string, std::string> data)
{
	if (std::count(data.first.begin(), data.first.end(), '-') != 2)
		throw ("Error: bad date input");
	std::string	tmp = data.first;
	std::string hold[3];
	int	nbr;
	for (int i = 0; i < 3; i++)
		hold[i] = split(tmp, '-');
	for (unsigned long	i = 0; i < 3; i++)
	{
		if (hold[i].empty())
			throw ("Error: bad date input, Format YY-MM-DD");
		else
		{
			if (check_if_digit(hold[i]))
				throw ("Error: bad date input only take number in date");
		}
	}
	if (!(atoi(hold[0].c_str()) >= 2009 && atoi(hold[0].c_str()) < INT_MAX))
		throw ("Error: bad year input");
	nbr = atoi(hold[1].c_str());
	if (!(nbr >= 1 && nbr <= 12))
		throw ("Error: bad month input range of month 01..12");
	if (nbr == 1 || nbr == 3 || nbr == 5 ||\
			nbr == 7 || nbr == 8 || nbr == 10 || nbr == 12)
	{
		if (!(atoi(hold[2].c_str()) >= 1 && atoi(hold[2].c_str()) <= 31))
			throw ("Error: bad day input this month ranges from 01..31");
	}
	else if (nbr == 4 || nbr == 6 || nbr == 9 || nbr == 11)
	{
		if (!(atoi(hold[2].c_str()) >= 1 && atoi(hold[2].c_str()) <= 30))
			throw ("Error: bad day input this month ranges from 01..30");
	}
	else if (nbr == 2)
	{
		//maybe here add 29 too
		if (!(atoi(hold[2].c_str()) >= 1 && atoi(hold[2].c_str()) <= 28))
			throw ("Error: bad day input this month ranges from 01..28");
	}
	int	dot = 0;
	for (unsigned long i = 0; i < data.second.length(); i++)
	{
		if (!isdigit(data.second.c_str()[i]) || dot > 1)
		{
			if (data.second.c_str()[i] != '.' || dot > 1)
				throw ("Error: bad value input enter a valid number");
		}
		if (data.second.c_str()[i] == '.')
			dot++;
	}
	if (!(atof(data.second.c_str()) >= 1 && atof(data.second.c_str()) < INT_MAX))
		throw ("Error: bad value range");
}

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
		try
		{
			if (isspace(data.c_str()[0]) || isspace(data.c_str()[data.length() - 1]))
				data = trim_string(data);
			if (data.empty())
				throw ("Error: Empty line");
			else
			{
				if (std::count(data.begin(), data.end(), '|') != 1 || \
						data.find('|') == 0 || data.find('|') == data.length() - 1)
					throw ("Error: bad input");
				else
				{
					std::pair<std::string, std::string> sp;
					sp.first = trim_string(split(data, '|'));
					sp.second = trim_string(data);
					if (!i)
					{
						if (sp.first.compare("data") || sp.second.compare("value"))
							continue ;
					}
					date_value_check(sp);
					std::map<std::string, double>::iterator it;
					it = this->data.find(sp.first);
					if (it == this->data.end())
					{
						it = this->data.lower_bound(sp.first);
						it--;
					}
					std::cout << sp.first << " => " << sp.second << " = " << it->second * atof(sp.second.c_str()) << std::endl;
				}
			}
		}
		catch (const char *error)
		{
			std::cerr << error << std::endl;
		}
	}
}

BitcoinExchange::BitcoinExchange(void)
{
	std::cout << "BitcoinExchange Default constructor called!" << std::endl;
}

void	BitcoinExchange::read_database(void)
{
	this->fd_database.open("data.csv");
	if (!this->fd_database.is_open())
	{
		std::cerr << "Error can't open file of the database" << std::endl;
		exit(1);
	}
	std::string data;
	std::pair<std::string, double> add;
	std::getline(this->fd_database, data);
	for (int i = 0; std::getline(this->fd_database, data); i++)
	{
		add.first = split(data, ',');
		add.second = atof(data.c_str());
		this->data.insert(add);
	}
	this->fd_database.close();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & obj)
{
	std::cout << "BitcoinExchange Copy constructor called!" << std::endl;
	*this = obj;
}

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const & obj)
{
	std::cout << "BitcoinExchange Copy assignement called!" << std::endl;
	std::map<std::string, double>::const_iterator	itr;

	for (itr = obj.data.cbegin(); itr != obj.data.cend(); itr++)
		this->data.insert(*itr);
	return (*this);
}

BitcoinExchange::~BitcoinExchange(void)
{
	std::cout << "BitcoinExchange Destructor called!" << std::endl;
}
