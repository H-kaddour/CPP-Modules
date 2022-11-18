/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:32:31 by hkaddour          #+#    #+#             */
/*   Updated: 2022/11/18 22:03:12 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "Constructer Phone called" << std::endl;
	this->get_input();
}

void	PhoneBook::get_input()
{
	int	i;

	i = 0;
	while (1)
	{
		std::string input;
		std::cout << "Enter Your Input: ", std::getline(std::cin, input);
		if (!input.compare("ADD"))
		{
			add(i);
			i++;
		}
		if (!input.compare("SEARCH"))
			search();
		if (!input.compare("EXIT"))
			std::exit(0);
	}
}

void	Contact::setter(void)
{
	std::cout << "Enter First Name: ", std::cin >> firstname;
	std::cout << "Enter Last Name: ", std::cin >> lastname;
	std::cout << "Enter Nickname: ", std::cin >> nickname;
	std::cout << "Enter Phone Number: ", std::cin >> phonenumber;
	std::cout << "Enter Your Darkest Secret: ", std::cin >> darkestsecret;
}

void Contact::getter(int index)
{
	std::cout << "*---------------------------------------------------------------*" << std::endl;
	std::cout << "|" << "	" << index << "	" << "|" \
	 << "	" << firstname << "	" << "|" \
	 << "	" << lastname << "	" << "|" \
	 << "	" << nickname << "	" << "|" << std::endl;
	std::cout << "*---------------------------------------------------------------*" << std::endl;
}

void	PhoneBook::search(void)
{
	int	i;

	i = 0;
	my_contacts[i].getter(i);
	//while (i < 8)
	//{
	//	my_contacts[i].getter(i);
	//	i++;
	//}
}

void	PhoneBook::add(int index)
{
	if (index == 8)
		index = 0;
	my_contacts[index].setter();
	//while (i < 8)
	//my_contacts[i++].setter();
	//i = 0;
	//while (i < 8)
	//{
	//	std::cout << my_contacts[i].getter() << std::endl;
	//	i++;
	//}
}

//void	PhoneBook::search(void)
//{
//
//}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Distructer Phone called" << std::endl;
}

Contact::Contact()
{
	std::cout << "Constructer Contact called" << std::endl;
}

//void	PhoneBook::get_info(void)
//{
//	int	i;
//
//	i = 0;
//	std::string	input;
//	std::cout << "Enter First Name: ", std::cin >> input;
//	colum[i++] = input;
//	std::cout << "Enter Last Name: ", std::cin >> input;
//	colum[i++] = input;
//	std::cout << "Enter Nickname: ", std::cin >> input;
//	colum[i++] = input;
//	std::cout << "Enter Phone Number: ", std::cin >> input;
//	colum[i++] = input;
//	std::cout << "Enter Your Darkest Secret: ", std::cin >> input;
//	colum[i] = input;
//	//std::cout << colum << std::endl;
//	i = 0;
//	while (i < 5)
//	{
//		std::cout << colum[i] << std::endl;
//		i++;
//	}
//}

Contact::~Contact(void)
{
	std::cout << "Distructer Contact called" << std::endl;
}

int	main()
{
	PhoneBook	data;
}
