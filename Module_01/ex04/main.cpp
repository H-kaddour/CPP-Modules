/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:24:44 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/13 16:19:48 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void	error(std::string msg)
{
	std::cout << msg << std::endl;
	std::exit(1);
}

std::string	file(std::string file)
{
	return (file + ".replace");
}

int main(int ac, char **av)
{
	if (ac != 4)
		error("Invalid argument!");
	else
		write_in_file(av);

	return (0);
}
