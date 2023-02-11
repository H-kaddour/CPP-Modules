/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 22:24:16 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/31 18:47:41 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>

class Span
{
	std::vector<int> vec;
	unsigned int N;
	public:
		Span(void);
		Span(unsigned int _N);
		Span(Span const & obj);
		~Span(void);
		Span & operator=(Span const & obj);
		void	addNumber(int nbr);
		void	rangeOFiter(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		shortestSpan(void);
		int		longestSpan(void);
};
