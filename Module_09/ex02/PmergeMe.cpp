/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:17:25 by hkaddour          #+#    #+#             */
/*   Updated: 2023/03/27 21:02:58 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	sorting(int len, int *nbr)
{
	clock_t	vec;
	clock_t	deq;
	std::cout << "Before:";
	for (int i = 0; i < len; i++)
		std::cout << " " << nbr[i];
	std::cout << std::endl;
	std::vector<int>	sort;
	for (int i = 0; i < len; i++)
		sort.push_back(nbr[i]);
	std::deque<int>	dqu;
	for (int i = 0; i < len; i++)
		dqu.push_back(nbr[i]);
	deq = clock();
	merge_sort(dqu);
	deq = clock() - deq;
	vec = clock();
	merge_sort(sort);
	vec = clock() - vec;
	std::deque<int>::iterator	itr;
	std::cout << "After:";
	for (itr = dqu.begin(); itr != dqu.end(); itr++)
		std::cout << " " << *itr;
	std::cout << std::endl;
	std::cout << "Time to process a range of " << len << \
		" elements with std::vector : " << vec << " us" << std::endl;
	std::cout << "Time to process a range of " << len << \
		" elements with std::deque : " << deq << " us" << std::endl;
}

void	parsing(int len, char **data, int **nbr)
{
	for (int i = 0; i < len; i++)
	{
		for (size_t	j = 0; j < strlen(data[i]); j++)
		{
			if (!isdigit(data[i][j]))
				throw ("Error: only positive number");
		}
		if (!(atoi(data[i]) >= 0 && atoi(data[i]) < INT_MAX))
			throw ("Error: wrong range");
		(*nbr)[i] = atoi(data[i]);
	}
}
