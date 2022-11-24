/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:32:31 by hkaddour          #+#    #+#             */
/*   Updated: 2022/11/19 21:07:40 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->get_input();
}

void	PhoneBook::get_input()
{
	int	i;

	i = 0;
	while (!std::cin.eof())
	{
		std::string input;
		std::cout << "Enter Your Input (ADD/SEARCH/EXIT): ", \
			std::getline(std::cin, input);
		if (std::cin.eof())
			return ;
		if (!input.compare("ADD"))
		{
			if (i == 8)
				i = 0;
			add(i);
			i++;
		}
		if (!input.compare("SEARCH"))
			search();
		if (!input.compare("EXIT"))
			return ;
	}
}

void	Contact::setter(void)
{
	while (true)
	{
		std::cout << "Enter First Name: ", std::getline(std::cin, firstname);
		if (std::cin.eof())
			return ;
		if (!firstname.empty())
			break ;
	}
	while (true)
	{
		std::cout << "Enter Last Name: ", std::getline(std::cin, lastname);
		if (std::cin.eof())
			return ;
		if (!lastname.empty())
			break ;
	}
	while (true)
	{
		std::cout << "Enter Nickname: ", std::getline(std::cin, nickname);
		if (std::cin.eof())
			return ;
		if (!nickname.empty())
			break ;
	}
	while (true)
	{
		std::cout << "Enter Phone Number: ", std::getline(std::cin, phonenumber);
		if (std::cin.eof())
			return ;
		if (!phonenumber.empty())
			break ;
	}
	while (true)
	{
		std::cout << "Enter Your Darkest Secret: ", std::getline(std::cin, darkestsecret);
		if (std::cin.eof())
			return ;
		if (!darkestsecret.empty())
			break ;
	}
}

int Contact::getter(int index)
{
	if (!firstname[0])
		return (0);
	std::cout << "|" << std::setw(11) << index;
	std::cout << "|" << std::setw(11), \
		(firstname.length() >= 10) ? std::cout << firstname.substr(0,9) + "." : \
		std::cout << firstname;
	std::cout << "|" << std::setw(11), \
		(lastname.length() >= 10) ? std::cout << lastname.substr(0,9) + "." : \
		std::cout << lastname;
	std::cout << "|" << std::setw(11), \
		(nickname.length() >= 10) ? std::cout << nickname.substr(0,9) + "." << "|" << std::endl : \
		std::cout << nickname << "|" <<  std::endl;
	std::cout << "*-----------------------------------------------*" << std::endl;
	return (1);
}

int	Contact::check_index_error(void)
{
	if (!firstname[0])
		return (1);
	return (0);
}

void	Contact::print_index_info(void)
{
	std::cout << "Firstname:     " << firstname << std::endl;
	std::cout << "Lastname:      " << lastname << std::endl;
	std::cout << "Nickname:      " << nickname << std::endl;
	std::cout << "Phonenumber:   " << phonenumber << std::endl;
	std::cout << "darkestsecret: " << darkestsecret << std::endl;
}

void	PhoneBook::search(void)
{
	int	i;
	std::string input;

	i = 0;
	if (!my_contacts[i].check_index_error())
		std::cout << "*-----------------------------------------------*" << std::endl;
	while (my_contacts[i].getter(i) && i < 7)
		i++;
	while (!std::cin.eof())
	{
		std::cout << "Enter a valid index to get info: ", std::getline(std::cin, input);
		if (std::cin.eof())
			return ;
		if (!input.empty())
			break ;
	}
	if (input.length() != 1 && !std::isdigit(input[0]))
	{
		std::cout << "Error only number in range of (0-8)" << std::endl;
		return ;
	}
	if (my_contacts[stoi(input)].check_index_error())
	{
		std::cout << "Error this index didn't have info yet" << std::endl;
		return ;
	}
	else
		my_contacts[stoi(input)].print_index_info();
}

void	PhoneBook::add(int index)
{
	my_contacts[index].setter();
}

PhoneBook::~PhoneBook(void) {}

Contact::Contact() {}

Contact::~Contact(void) {}

int	main()
{
	PhoneBook	data;
}
