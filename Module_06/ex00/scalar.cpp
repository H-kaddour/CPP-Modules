/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:48:50 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/28 14:44:01 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"

void	to_char(char *str)
{
	std::cout << "char: ";
	if (isdigit(str[0]))
	{
		int	alph = std::atoi(str);
		if (isprint((char)alph))
			std::cout << "'" << (char)alph << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
}

void	to_int(char *str)
{
	std::cout << "int: ";
	if (isdigit(str[0]))
		std::cout << std::atoi(str) << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	to_fl_doub(int chk, char *str)
{
	std::cout << (!chk ? "float: " : "double: ");
	if (!isdigit(str[0]))
	{
		if (strncmp(str, "nan", 3) && strncmp(str, "-inf", 4) && strncmp(str, "+inf", 4))
		{
			std::cout << "impossible" << std::endl;
			return ;
		}
	}
	std::cout << std::fixed;
	std::cout << std::setprecision(1);
	float fl = std::atof(str);
	std::cout << fl << (!chk ? "f" : "" ) << std::endl;
}
