/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:55:28 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/29 17:18:29 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T, typename D>
void	iter(T arr, D len, void (*print)(T))
{
	for (int i = 0; i < len; i++)
		print(&arr[i]);
}

template <typename T>
void	print(T elem)
{
	std::cout << (*elem) << std::endl;
}
