/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:26:10 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/27 14:27:53 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

typedef	struct Data
{
	int	nbr;
	uintptr_t	ser;
	Data *des;
} Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
