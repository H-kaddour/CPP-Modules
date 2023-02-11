/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 22:28:44 by hkaddour          #+#    #+#             */
/*   Updated: 2023/02/03 15:29:51 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : N(0)
{
	std::cout << "Span Defautl constructer called." << std::endl;
}

Span::Span(unsigned int _N) : N(_N)
{
	std::cout << "Span Init constructer called." << std::endl;
}

Span::Span(Span const & obj)
{
	std::cout << "Span Copy constructer called." << std::endl;
	*this = obj;
}

Span &Span::operator=(Span const & obj)
{
	std::cout << "Span Copy assignment called." << std::endl;
	this->N = obj.N;
	for (unsigned int i = 0; i < obj.vec.size(); i++)
		this->addNumber(obj.vec[i]);
	return (*this);
}

void	Span::addNumber(int nbr)
{
	try
	{
		if (this->N > this->vec.size())
			this->vec.push_back(nbr);
		else
			throw (std::out_of_range("You can't add it cuz vector is full."));
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Span::rangeOFiter(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
	{
		this->addNumber(*begin);
		begin++;
	}
}

int	Span::shortestSpan(void)
{
	try
	{
		if (this->vec.size() <= 1)
			throw ("vector size is small");
		unsigned int next_dst;
		std::vector<int>::iterator itr;
		std::vector<int>::iterator itr2;
		unsigned int dst = abs(*this->vec.begin() - *(this->vec.end() - 1));
		for (itr = this->vec.begin(); itr != this->vec.end(); itr++)
		{
			for (itr2 = itr; itr2 != this->vec.end() - 1; itr2++)
			{
				next_dst = abs(*itr2 - *(itr2 + 1));
				dst = (dst > next_dst) ? next_dst : dst;
			}
		}
		return (dst);
	}
	catch (char const *error)
	{
		std::cout << error << std::endl;
		return (0);
	}
}

int	Span::longestSpan(void)
{
	try
	{
		if (this->vec.size() <= 1)
			throw ("vector size is small");
		return (*max_element(this->vec.begin(), this->vec.end()) - \
				*min_element(this->vec.begin(), this->vec.end()));
	}
	catch (char const *error)
	{
		std::cout << error << std::endl;
		return (0);
	}
}

Span::~Span(void)
{
	std::cout << "Span Defautl destructer." << std::endl;
}
