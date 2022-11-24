/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:39:51 by hkaddour          #+#    #+#             */
/*   Updated: 2022/11/19 19:00:52 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>
# include <cstring>
# include <iomanip>

class Contact
{
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string darkestsecret;
	public:
		void	setter(void);
		int		getter(int index);
		int		check_index_error(void);
		void	print_index_info(void);
		Contact(void);
		~Contact(void);
};

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	add(int index);
		void	search();
		void	get_input();

	private:
		Contact my_contacts[8];
};
