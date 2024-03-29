/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 18:18:16 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/30 22:20:13 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	{
		try
		{
			int	arr[6] = {10, 9, 2, 3, 82, 12};
			std::vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
			easyfind(vec, 1);
		}
		catch (char const *error)
		{
			std::cout << error << std::endl;
		}
	}

	{
		try
		{
			std::array<int, 6> arr = {10, 98, 2, 3, 82, 12};
			easyfind(arr, 12);
		}
		catch (char const *error)
		{
			std::cout << error << std::endl;
		}
	}
	return (0);
}
