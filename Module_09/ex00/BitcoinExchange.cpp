/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:06:28 by hkaddour          #+#    #+#             */
/*   Updated: 2023/03/17 21:52:13 by hkaddour         ###   ########.fr       */
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
		exit(1);
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

//std::string	trim_string(std::string data)
void	trim_string(std::string &data)
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
	data = data.substr(start, end - start + 1);
	//return (data.substr(start, end - start + 1));
}

std::vector<std::string>	split(std::string data, char c)
{
	std::vector<std::string> value;
	std::string::iterator itr = data.begin();
	std::string::iterator trav = data.begin();
	int	i = 0;
	while (1)
	{
		if (itr == data.end())
		{
			value.push_back(data.substr(i, std::distance(trav, itr)));
			break ;
		}
		if (*itr == c)
		{
			value.push_back(data.substr(i, std::distance(trav, itr)));
			i += std::distance(trav, itr) + 1;
			trav = itr + 1;
		}
		itr++;
	}
	//std::vector<std::string>::iterator g;

	//for (g = value.begin(); g != value.end(); g++)
	//{
	//	std::cout << *g << std::endl;
	//}
	//exit(0);
	//value.push_back(trim_string(data.substr(0, data.find(c))));
	//value.push_back(trim_string(data.substr(data.find(c) + 1)));
	//std::cout << value[0] << std::endl;
	//std::cout << value[1] << std::endl;
	//std::cout << value[3] << std::endl;
	return (value);
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
		//std::cout << data.c_str()[data.length() - 1] << std::endl;
		//here trim the string and 
		//if (!i)
		//{
		//	if (data.compare("data | value"))
		//		continue ;
		//	else
		//		std::cout << "Input file should start with : data | value" << std::endl;
		//}
		if (isspace(data.c_str()[0]) || isspace(data.c_str()[data.length() - 1]))
			trim_string(data);
		if (data.empty())
			std::cout << "Empty line :v" << std::endl;
		else
		{
			//std::cout << data << std::endl;
			//if (i && (std::count(data.begin(), data.end(), '|') != 1 || \
			//		!isdigit(data.c_str()[0]) || !isdigit(data.c_str()[data.length() - 1])))
			//std::cout << data.find('|') << std::endl;
			//std::cout << data.length() << std::endl;

			//std::cout << data << std::endl;
			//std::string::iterator	l;
			//l = data.begin() + 3;
			//std::cout << std::distance(data.begin(), l) << std::endl;
			//std::cout << data.find('|', 0) << std::endl;
			//std::cout << data.find('|', 0) << std::endl;
			//std::cout << data[data.find('|', 0)] << std::endl;
			//std::cout << data[data.find('|', data.find('|') + 1)] << std::endl;
			//std::cout << data.find('|', data.find('|') + 1) << std::endl;
			//exit(0);

			if (std::count(data.begin(), data.end(), '|') != 1 || \
					data.find('|') == 0 || data.find('|') == data.length() - 1)
			{
				std::cout << "Here an error" << std::endl;
			}
			else
			{
				std::vector<std::string> sp = split(data, '|');
				for (unsigned long	i = 0; i < sp.size(); i++)
					trim_string(sp[i]);
				if (!i)
				{
					if (sp[0].compare("data") || sp[1].compare("value"))
						continue ;
				}
				//all this error should be used by throw catch
				std::cout << sp[0] << std::endl;
				if (std::count(sp[0].begin(), sp[0].end(), '-') != 2)
				{
					std::cout << "Error here" << std::endl;
				}
				std::vector<std::string> date = split(sp[0], '-');
				for (unsigned long	i = 0; i < data.size(); i++)
					std::cout << data << std::endl;
				exit(0);
			}
		}
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
