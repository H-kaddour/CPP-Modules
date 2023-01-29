/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:08:04 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/29 18:10:49 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array
{
	T *arr;
	unsigned int	_size;
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array & obj);
		Array & operator=(Array const & obj);
		T	& operator[](int);
		int	size(void);
		~Array(void);
};

#include "Array.tpp"
