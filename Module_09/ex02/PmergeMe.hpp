/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:18:05 by hkaddour          #+#    #+#             */
/*   Updated: 2023/03/25 17:43:54 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <sys/time.h>
#include <algorithm>

void	parsing(int len, char **data, int **nbr);
void	sorting(int len, int *nbr);

template <class T>
void	fill_data(T sort, std::pair<T, T > &tmp, std::pair<int, int> size)
{
	int	i;
	for (i = 0; i < size.first; i++)
		tmp.first.push_back(sort[i]);
	for (; (unsigned long)i < (sort.size()); i++)
		tmp.second.push_back(sort[i]);
}

template <typename T>
void	sort_that_shit(T &sort, std::pair<T, T > tmp)
{
	int	size = sort.size();
	int	i = 0;
	int	j = 0;
	int	k = 0;

	while (k < size)
	{
		if (i == static_cast<int>(tmp.first.size()) || \
				j == static_cast<int>(tmp.second.size()))
			break ;
		if (tmp.first[i] <= tmp.second[j])
			sort[k] = tmp.first[i++];
		else
			sort[k] = tmp.second[j++];
		k++;
	}
	if (i != static_cast<int>(tmp.first.size()))
	{
		while (k < size)
			sort[k++] = tmp.first[i++];
	}

	if (j != static_cast<int>(tmp.second.size()))
	{
		while (k < size)
			sort[k++] = tmp.second[j++];
	}
}

template <typename T>
void	merge_sort(T &sort)
{
	std::pair<int, int> size;
	std::pair<T, T > tmp;

	if (sort.size() < 2)
		return ;
	size.first = sort.size() / 2;
	size.second = sort.size() - size.first;
	fill_data(sort, tmp, size);
	merge_sort(tmp.first);
	merge_sort(tmp.second);
	sort_that_shit(sort, tmp);
}
