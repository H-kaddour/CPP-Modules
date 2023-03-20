/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:50:33 by hkaddour          #+#    #+#             */
/*   Updated: 2023/03/20 11:13:05 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

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

std::string	get_arg(std::string data, int index)
{
	return (data.substr(index, 1));
}

void	calculate(std::string data)
{
	std::stack<int>	operation;
	int	top;
	int	down;

	for (unsigned long	i = 0; i < data.length(); i++)
	{
		if (isdigit(data.c_str()[i]))
			operation.push(atoi(get_arg(data, i).c_str()));
		else
		{
			top = operation.top();
			operation.pop();
			down = operation.top();
			operation.pop();
			if (data.c_str()[i] == '*')
				operation.push(top * down);
			else if (data.c_str()[i] == '/')
				operation.push(down / top);
			else if (data.c_str()[i] == '-')
				operation.push(down - top);
			else if (data.c_str()[i] == '+')
				operation.push(top + down);
		}
	}
	std::cout << operation.top() << std::endl;
	//maybe here i will not show - or float point only decimal
}

std::string	parse_the_data(std::string data)
{
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
	if (!isdigit(data.c_str()[0]) || !isdigit(data.c_str()[1]))
		throw ("Error: the first two element should be digit");
	if (nbr - oprtr != 1)
		throw ("Error: number or operator are wrong");
	return (data);
}
