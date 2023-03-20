/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:17:25 by hkaddour          #+#    #+#             */
/*   Updated: 2023/03/20 18:34:19 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//std::vector<int>	insert_sort(int len, char **data)
std::vector<int>	insert_sort(int len, int *nbr)
{
	std::vector<int>	sort;


	for (int i = 0; i < len; i++)
		sort.push_back(nbr[i]);

	//int	hld;
	int	j;
	//std::vector<int>::iterator	itr = sort.begin();
	for (int	i = 1; i < len; i++)
	{
		j = i;
		//while (*itr > *(itr + 1))
		//for (int	j = i; sort[j - 1] > sort[j]; j++)
		while (sort[j - 1] > sort[j])
		{
			std::swap(sort[j - 1], sort[j]);
			j--;
		}
	}

	//for (unsigned long i = 0; i < sort.size(); i++)

	std::sort(sort.begin(), sort.end());
	for (unsigned long i = 0; i < sort.size(); i++)
		std::cout << sort[i] << std::endl;
	return (sort);
}

//void	sorting(int len, char **data)
void	sorting(int len, int *nbr)
{
	std::cout << "Before:";
	for (int i = 0; i < len; i++)
		std::cout << " " << nbr[i];
	std::cout << std::endl;
	insert_sort(len, nbr);
	//merge_sort(len, nbr);
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
