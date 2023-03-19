/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:50:33 by hkaddour          #+#    #+#             */
/*   Updated: 2023/03/19 19:25:10 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

std::string	get_arg(std::string &data)
{
	std::string	hold;
	std::string::iterator	itr = data.begin();

	for ()
	for (unsigned long i = 0; i < data.length(); i++, itr++)
	{
		if (!isspace(data.c_str()[i]))
		{
			hold = data.substr(i, std::distance(itr, itr + data.find()));
		}
	}
	//hold = ;
	return (data.substr());
}

void	take_off_space(std::string &data)
{
	std::string::iterator itr = data.begin();

	for (int i = 0; itr < data.end(); )
	{
		if (isspace(data.c_str()[i]))
			data.erase(itr);
		else
		{
			i++;
			itr++;
		}
	}
}

void	calculate(std::string data)
{
	std::cout << data << std::endl;
}

std::string	parse_the_data(std::string data)
{
	std::string	hold;

	hold = data;
	while (1)
	{
		get_arg(hold);
	}

	take_off_space(data);
	int	nbr = 0;
	int	oprtr = 0;
	//check it will be range between 0 9
	//it will start with two number and no sign
	//don't accept negative
	if (data.empty() || data.length() < 3)
		throw ("Error: invalid argument!");
	for (unsigned long	i = 0; i < data.size(); i++)
	{
		if (!isdigit(data.c_str()[i]))
		{
			if (data.c_str()[i] != '/' && data.c_str()[i] != '*' &&\
					data.c_str()[i] != '+' && data.c_str()[i] != '-')
				throw ("Error: only take number and math sign");
			else
				oprtr++;
		}
		else
			nbr++;
	}
	//for (int i = 0; itr < data.end(); )
	//{

	//}

	if (nbr - oprtr != 1)
		throw ("Error: number or operator are wrong");
	return (data);
}
//   9 3 + 8 * 3 /      
