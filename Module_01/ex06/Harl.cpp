/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 21:07:23 by hkaddour          #+#    #+#             */
/*   Updated: 2022/11/23 21:44:46 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my " 
		<< "7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
	std::cout << " I really do!" << std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did, "
		"I wouldn’t be asking for more!" << std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started "
		<< "working here since last month." << std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void	Harl::complain(std::string level)
{
	typedef	void(Harl::*func)();
	func addr_func[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string elem[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	count = 8;
	for (int i = 0; i < 4; i++)
	{
		if (!level.compare(elem[i]))
			count = i;
	}
	switch (count)
	{
		case 8:
			{
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				return ;
			}
		case 0:
			(this->*(addr_func[count++]))();
		case 1:
			(this->*(addr_func[count++]))();
		case 2:
			(this->*(addr_func[count++]))();
		case 3:
			(this->*(addr_func[count]))();
	}
}
