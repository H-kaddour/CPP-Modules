// **************************************************************************** //
//                                                                              //
//                                                         :::      ::::::::    //
//    easyfind.tpp                                       :+:      :+:    :+:    //
//                                                     +:+ +:+         +:+      //
//    By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+         //
//                                                 +#+#+#+#+#+   +#+            //
//    Created: 2023/01/29 18:20:10 by hkaddour          #+#    #+#              //
//    Updated: 2023/01/29 18:20:10 by hkaddour         ###   ########.fr        //
//                                                                              //
// **************************************************************************** //

#pragma once

template <typename T>
void	easyfind(T cont, int find)
{
	typename T::iterator iter = std::find(cont.begin(), cont.end(), find);
	if (*iter != find)
		throw ("Didn't find the occurence number :v");
	std::cout << find << " number found." << std::endl;
}
