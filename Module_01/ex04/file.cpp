/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:06:49 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/12 18:48:45 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void	write_in_file(char **av)
{
	int			find;
	std::string			buffer;
	std::streampos	size;
	std::ofstream		f_out;

	std::ifstream f_in (av[1]);
	if (!f_in.is_open())
		error("Failed to open file");
	f_out.open(file(av[1]), std::ios::out | std::ios::binary);
	while (std::getline(f_in, buffer))
	{
		if ((find = buffer.find(av[2])) < 0)
			f_out << buffer;
		else
		{
			while (!(find < 0))
			{
				f_out << buffer.substr(0, find);
				f_out << av[3];
				buffer.assign(buffer, find + strlen(av[1]));
				find = buffer.find(av[2]);
				if (find < 0 && !buffer.empty())
					f_out << buffer;
			}
		}
		f_out << std::endl;
	}
	f_in.close();
	f_out.close();
}
//gad this exercice and gad exercice 1 allocate problem abort
