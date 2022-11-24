/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:09:49 by hkaddour          #+#    #+#             */
/*   Updated: 2022/11/19 16:12:34 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac == 1)
		std::cout << "Error";
	else
	{
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				std::cout << (char)toupper(av[i][j]);
				j++;
			}
			i++;
		}
	}
	std::cout << std::endl;
	return (0);
}
