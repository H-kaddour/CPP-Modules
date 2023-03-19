/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:06:28 by hkaddour          #+#    #+#             */
/*   Updated: 2023/03/19 13:13:00 by hkaddour         ###   ########.fr       */
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
	//data = data.substr(start, end - start + 1);
	return (data.substr(start, end - start + 1));
}

//std::pair<std::string, std::string> split(std::string data, char c)
//{
//	//std::pair<std::string, double> value;
//	std::pair<std::string, std::string> value;
//	value.first = data.substr(0, data.find(c));
//	std::string hld = data.substr(data.find(c) + 1, std::distance(data.begin(), data.end()));
//	//value.second = atof(hld.c_str());
//	value.second = hld;
//	return (value);
//}

std::string	split(std::string &data, char c)
{
	std::string	hold;

	hold = data.substr(0, data.find(c));
	data = data.substr(data.find(c) + 1, data.length());
	return (hold);
}

//std::vector<std::string>	splitt(std::string data, char c)
//{
//	std::vector<std::string> value;
//	std::string::iterator itr = data.begin();
//	std::string::iterator trav = data.begin();
//	int	i = 0;
//	while (1)
//	{
//		if (itr == data.end())
//		{
//			value.push_back(data.substr(i, std::distance(trav, itr)));
//			break ;
//		}
//		if (*itr == c)
//		{
//			value.push_back(data.substr(i, std::distance(trav, itr)));
//			i += std::distance(trav, itr) + 1;
//			trav = itr + 1;
//		}
//		itr++;
//	}
//	return (value);
//}

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
					//exit(0);
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
	//std::map<std::string, double>::iterator it;
	//for (it = this->data.begin(); it != this->data.end(); it++)
	//	std::cout << it->first << " | " << it->second << std::endl;
	//exit(0);
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
//std::vector<std::string>	split(std::string data, char c)
//{
//	std::vector<std::string> value;
//	std::string::iterator itr = data.begin();
//	std::string::iterator trav = data.begin();
//	int	i = 0;
//	while (1)
//	{
//		if (itr == data.end())
//		{
//			value.push_back(data.substr(i, std::distance(trav, itr)));
//			break ;
//		}
//		if (*itr == c)
//		{
//			value.push_back(data.substr(i, std::distance(trav, itr)));
//			i += std::distance(trav, itr) + 1;
//			trav = itr + 1;
//		}
//		itr++;
//	}
//	return (value);
//}

//int	check_if_digit(std::string nbr)
//{
//	for (unsigned long j = 0; j < nbr.length(); j++)
//	{
//		if (!isdigit(nbr.c_str()[j]))
//			return (1);
//	}
//	return (0);
//}

//void	BitcoinExchange::parse_input_file(std::string file)
//{
//	std::string	data;
//	std::ifstream	input_file;
//	database	hold;
//	int	nbr;
//
//	input_file.open(file);
//	if (!input_file.is_open())
//	{
//		std::cerr << "Error can't open file of the database" << std::endl;
//		exit(1);
//	}
//	for (int	i = 0; std::getline(input_file, data); i++)
//	{
//		if (isspace(data.c_str()[0]) || isspace(data.c_str()[data.length() - 1]))
//			trim_string(data);
//		if (data.empty())
//			std::cerr << "Empty line :v" << std::endl;
//		else
//		{
//			if (std::count(data.begin(), data.end(), '|') != 1 || \
//					data.find('|') == 0 || data.find('|') == data.length() - 1)
//			{
//				std::cerr << "Here an error" << std::endl;
//			}
//			else
//			{
//				std::vector<std::string> sp = split(data, '|');
//				for (unsigned long	i = 0; i < sp.size(); i++)
//					trim_string(sp[i]);
//				if (!i)
//				{
//					if (sp[0].compare("data") || sp[1].compare("value"))
//						continue ;
//				}
//				//all this error should be used by throw catch
//				//std::cout << sp[0] << std::endl;
//				if (std::count(sp[0].begin(), sp[0].end(), '-') != 2)
//				{
//					std::cerr << "Error here" << std::endl;
//				}
//				std::vector<std::string> date = split(sp[0], '-');
//				//std::cout << date.size() << std::endl;
//				for (unsigned long	i = 0; i < date.size(); i++)
//				{
//					if (date[i].empty())
//						std::cerr << sp[0] << " Error in date :v" << std::endl;
//					else
//					{
//						if (check_if_digit(date[i]))
//						{
//							std::cerr << "Error in date only number" << std::endl;
//							continue ;
//							//mybe here use an exception
//						}
//					}
//				}
//				//here maybe int max will overflow to a value of 2009 mybe
//				//std::cout << atoi(date[0].c_str()) << std::endl;
//				if (!(atoi(date[0].c_str()) >= 2009 && atoi(date[0].c_str()) <= 2022))
//					std::cerr << "Error" << std::endl;
//				nbr = atoi(date[1].c_str());
//				if (!(nbr >= 1 && nbr <= 12))
//					std::cerr << "Error" << std::endl;
//				if (nbr == 1 || nbr == 3 || nbr == 5 ||\
//						nbr == 7 || nbr == 8 || nbr == 10 || nbr == 12)
//				{
//					if (!(atoi(date[2].c_str()) >= 1 && atoi(date[2].c_str()) <= 31))
//						std::cerr << "Error" << std::endl;
//				}
//				else if (nbr == 4 || nbr == 6 || nbr == 9 || nbr == 11)
//				{
//					if (!(atoi(date[2].c_str()) >= 1 && atoi(date[2].c_str()) <= 30))
//						std::cerr << "Error" << std::endl;
//				}
//				else if (nbr == 2)
//				{
//					//maybe here add 29 too
//					if (!(atoi(date[2].c_str()) >= 1 && atoi(date[2].c_str()) <= 28))
//						std::cerr << "Error" << std::endl;
//				}
//				if (check_if_digit(sp[1]))
//				{
//					std::cerr << "Error in date only number" << std::endl;
//					//continue ;
//					//mybe here use an exception
//				}
//				if (!(atof(sp[1].c_str()) >= 1 && atof(sp[1].c_str()) <= INT_MAX))
//				{
//					std::cerr << "Error in date only number" << std::endl;
//					//continue ;
//					//mybe here use an exception
//				}
//				hold.year = atoi(date[0].c_str());
//				hold.month = atoi(date[1].c_str());
//				hold.day = atoi(date[2].c_str());
//				hold.value = atof(sp[1].c_str());
//				//std::cout << hold.year << std::endl;
//				//std::cout << hold.month << std::endl;
//				//std::cout << hold.day << std::endl;
//				std::cout << hold.value << std::endl;
//				//std::find(this->data.begin()->year, this->data.end()->year, '2009');
//				//std::vector<int>::iterator g;
//				//g = this->data.begin();
//				//std::cout << *(&g->year) << std::endl;
//				//g = std::find((&this->data.begin()->year), (&this->data.end()->year), '2009');
//				////std::cout << std::find((&this->data.begin()->year), (&this->data.end()->year), '2009') << std::endl;
//				//std::cout << g << std::endl;
//				exit(0);
//				//for (int i = 0; i < this->data.size(); i++)
//				//{
//
//				//}
//			}
//		}
//	}
//}
//
//void	BitcoinExchange::save_database(std::string data, int i)
//{
//	(void)i;
//	(void)data;
//	//std::string hld;
//	//std::istringstream(data.substr(0, data.find('-'))) >> this->data[i].year;
//	//std::istringstream(data.substr(data.find('-') + 1, data.find('-') + 3)) >> this->data[i].month;
//	//std::istringstream(data.substr(data.find('-') + 4, data.find('-') + 6)) >> this->data[i].day;
//	//hld = data.substr(data.find(',') + 1, data.length());
//	//this->data[i].value = atof(hld.c_str());
//}
	

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
