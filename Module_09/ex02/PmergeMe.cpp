/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:17:25 by hkaddour          #+#    #+#             */
/*   Updated: 2023/03/24 17:32:20 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//void	fill_data(std::vector<int> sort, \
//		std::pair<std::vector<int>, std::vector<int> > &tmp, std::pair<int, int> size)
//{
//	int	i;
//	for (i = 0; i < size.first; i++)
//		tmp.first.push_back(sort[i]);
//	for (; (unsigned long)i < (sort.size()); i++)
//		tmp.second.push_back(sort[i]);
//}
//
//void	sort_that_shit(std::vector<int> &sort, \
//		std::pair<std::vector<int>, std::vector<int> > tmp)
//{
//	int	size = sort.size();
//	int	i = 0;
//	int	j = 0;
//	int	k = 0;
//
//	while (k < size)
//	{
//		if (i == tmp.first.size() || j == tmp.second.size())
//			break ;
//		if (tmp.first[i] <= tmp.second[j])
//			sort[k] = tmp.first[i++];
//		else
//			sort[k] = tmp.second[j++];
//			//here use a function of c++
//		k++;
//	}
//	if (i != tmp.first.size())
//	{
//		while (k < size)
//			sort[k++] = tmp.first[i++];
//	}
//
//	if (j != tmp.second.size())
//	{
//		while (k < size)
//			sort[k++] = tmp.second[j++];
//	}
//}
//
//void	merge_sort(std::vector<int> &sort)
//{
//	std::pair<int, int> size;
//	std::pair<std::vector<int>, std::vector<int> > tmp;
//
//	if (sort.size() < 2)
//		return ;
//	size.first = sort.size() / 2;
//	size.second = sort.size() - size.first;
//	fill_data(sort, tmp, size);
//	merge_sort(tmp.first);
//	merge_sort(tmp.second);
//	sort_that_shit(sort, tmp);
//}

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
	std::cout << "Time to process a range of " << len << " elements with std::vector : " << vec << " us" << std::endl;
	std::cout << "Time to process a range of " << len << " elements with std::deque : " << (double)deq << " us" << std::endl;
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
