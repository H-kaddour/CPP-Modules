/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:39:51 by hkaddour          #+#    #+#             */
/*   Updated: 2022/11/18 21:52:59 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
//#ifndef PHONEBOOK_HPP
//# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include <cstring>

//class PhoneBook;

class Contact
{
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string darkestsecret;
	public:
		//void	geter(void);
		//void	setter(void);
		void	setter(void);
		//std::string	setter(std::string input);
		void	getter(int index);
		//Contact(void);
		//Contact(PhoneBook *data, Contact *cont);
		Contact(void);
		~Contact(void);
};

class PhoneBook
{
	public:
		//PhoneBook(PhoneBook *data);
		PhoneBook(void);
		~PhoneBook(void);
		//void	get_info(void);
		void	add(int index);
		void	search();
		void	get_input();
		//void	input_decision(std::string input);

	private:
		Contact my_contacts[8];
		//std::string	colum[8]
};

//#endif
