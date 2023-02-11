/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:50:35 by hkaddour          #+#    #+#             */
/*   Updated: 2023/02/03 22:34:33 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <deque>
#include <list>
#include <map>
#include <stack>

template <typename T, class container=std::deque<T> >
class	MutantStack : public std::stack <T, container>
{
	public:
		MutantStack(void);
		MutantStack(MutantStack const & obj);
		MutantStack & operator=(MutantStack const & obj);
		~MutantStack(void);
		typedef	typename container::iterator	iterator;
		iterator	begin();
		iterator	end();
};

#include "MutantStack.tpp"
