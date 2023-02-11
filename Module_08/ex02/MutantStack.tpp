// **************************************************************************** //
//                                                                              //
//                                                         :::      ::::::::    //
//    MutantStack.tpp                                    :+:      :+:    :+:    //
//                                                     +:+ +:+         +:+      //
//    By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+         //
//                                                 +#+#+#+#+#+   +#+            //
//    Created: 2023/01/31 18:50:33 by hkaddour          #+#    #+#              //
//    Updated: 2023/02/01 15:32:47 by hkaddour         ###   ########.fr        //
//                                                                              //
// **************************************************************************** //

#pragma once

template <typename T, class container>
MutantStack<T, container>::MutantStack(void)
{
	std::cout << "MutantStack Defautl constructer called!" << std::endl;
}

template <typename T, class container>
MutantStack<T, container>::MutantStack(MutantStack const & obj)
{
	std::cout << "MutantStack Copy constructer called!" << std::endl;
	*this = obj;
}

template <typename T, class container>
MutantStack<T, container>	&	MutantStack<T, container>::operator=(MutantStack const & obj)
{
	std::cout << "MutantStack Copy assignment called!" << std::endl;
	(void)obj;
	return (*this);
}

template <typename T, class container>
typename MutantStack<T, container>::iterator	MutantStack<T, container>::begin(void)
{
	return (this->c.begin());
}

template <typename T, class container>
typename MutantStack<T, container>::iterator	MutantStack<T, container>::end(void)
{
	return (this->c.end());
}

template <typename T, class container>
MutantStack<T, container>::~MutantStack(void)
{
	std::cout << "MutantStack Destructer called!" << std::endl;
}
