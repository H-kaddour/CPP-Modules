/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:44:54 by hkaddour          #+#    #+#             */
/*   Updated: 2022/11/21 12:20:23 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string stringPTR = str;
	std::string &stringREF = str;

	std::cout << &str << " " << str << std::endl;
	std::cout << &stringPTR << " " << stringPTR << std::endl; std::cout << &stringREF << " " << stringREF << std::endl;
}
