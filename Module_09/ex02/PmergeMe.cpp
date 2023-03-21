/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:17:25 by hkaddour          #+#    #+#             */
/*   Updated: 2023/03/21 15:19:09 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	fill_data(std::vector<int> sort, \
		std::pair<std::vector<int>, std::vector<int> > &tmp, std::pair<int, int> size)
{
	int	i;
	for (i = 0; i < size.first; i++)
		tmp.first.push_back(sort[i]);
	for (; i < static_cast<int>(sort.size()); i++)
		tmp.second.push_back(sort[i]);
}

void	sort_that_shit(std::vector<int> sort, std::pair<std::vector<int>, std::vector<int> > tmp)
{
	for (int	i = 0; i < sort.size(); i++)
	{
		//for ()
	}
	//here finish the algo it's easy senior developers don't code anymore!!
}

void	merge_sort(std::vector<int> sort)
{
	std::pair<int, int> size;
	std::pair<std::vector<int>, std::vector<int> > tmp;

	if (sort.size() < 2)
		return ;
	size.first = sort.size() / 2;
	size.second = sort.size() - size.first;
	fill_data(sort, tmp, size);
	std::vector<int>::iterator	itr;
	std::cout << "start" << std::endl;
	for (itr = tmp.first.begin(); itr != tmp.first.end(); itr++)
		std::cout << *itr << std::endl;

	std::cout << "encore" << std::endl;

	for (itr = tmp.second.begin(); itr != tmp.second.end(); itr++)
		std::cout << *itr << std::endl;
	std::cout << "end" << std::endl;

	merge_sort(tmp.first);
	merge_sort(tmp.second);
	sort_that_shit(sort, tmp);
	


	//std::vector<int>::iterator	itr;
	//for (itr = tmp.first.begin(); itr < tmp.first.end(); itr++)
	//	std::cout << *itr << std::endl;

	//std::cout << "encore" << std::endl;

	//for (itr = tmp.second.begin(); itr < tmp.second.end(); itr++)
	//	std::cout << *itr << std::endl;
	//exit(0);

	//std::cout << sort.size() << std::endl;
	//std::cout << size.first << std::endl;
	//std::cout << size.second << std::endl;
}

void	sorting(int len, int *nbr)
{
	std::cout << "Before:";
	for (int i = 0; i < len; i++)
		std::cout << " " << nbr[i];
	std::cout << std::endl;
	std::vector<int>	sort;
	for (int i = 0; i < len; i++)
		sort.push_back(nbr[i]);
	merge_sort(sort);
	std::vector<int>::iterator	itr;
	std::cout << "After:";
	for (itr = sort.begin(); itr < sort.end(); itr++)
		std::cout << " " << *itr;
	std::cout << std::endl;
}

int	*parsing(int len, char **data)
{
	int	*nbr = new int[len];

	for (int i = 0; i < len; i++)
	{
		for (size_t	j = 0; j < strlen(data[i]); j++)
		{
			if (!isdigit(data[i][j]))
				throw ("Error: only positive number");
		}
		if (!(atoi(data[i]) >= 0 && atoi(data[i]) < INT_MAX))
			throw ("Error: wrong range");
		nbr[i] = atoi(data[i]);
	}
	return (nbr);
}
