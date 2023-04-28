/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:18:05 by hkaddour          #+#    #+#             */
/*   Updated: 2023/04/28 21:15:21 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <sys/time.h>
#include <algorithm>
#define K 100

void	parsing(int len, char **data, int **nbr);
void	sorting(int len, int *nbr);

template <typename T>
void	insertion_sort(T &sort)
{
	for (size_t	i = 0; i < sort.size() - 1; i++)
	{
		int	hld = sort[i + 1];
		int	j = i + 1;
		while (j && sort[j - 1] > hld)
		{
			sort[j] = sort[j - 1];
			j--;
		}
		sort[j] = hld;
	}
}

template <typename T>
std::pair<T, T>	separate(T sort)
{
	int	i;
	std::pair<T, T> tmp;
	for (i = 0; i < static_cast<int>(sort.size()) / 2; i++)
		tmp.first.push_back(sort[i]);
	for (; (unsigned long)i < (sort.size()); i++)
		tmp.second.push_back(sort[i]);
	return (tmp);
}

template <typename T>
void	merge_sort(T &sort, std::pair<T,T > tmp)
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
void	sortt(T &sort)
{
	std::pair<T, T> hld;

	if (sort.size() > K)
	{
		hld = separate(sort);
		sortt(hld.first);
		sortt(hld.second);
		merge_sort(sort, hld);
	}
	else
		insertion_sort(sort);
}
