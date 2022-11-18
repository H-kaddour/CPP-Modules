/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   learn_cpp.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:23:40 by hkaddour          #+#    #+#             */
/*   Updated: 2022/11/17 17:49:09 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
//****learn namespaces and iostreams
//using namespace std;
//namespace orange
//{
//	void	print(char *str)
//	{
//		std::cout << "orange print" << std::endl;
//		std::cout << str << std::endl;
//	}
//
//	void	get(int *a)
//	{
//		std::cout << "orange init" << std::endl;
//		std::cin >> *a;
//		std::cout << *a << std::endl;
//	}
//}
//
//namespace apple
//{
//	void	print(char *str)
//	{
//		std::cout << "apple print" << std::endl;
//		std::cout << str << std::endl;
//	}
//
//	void	get(int *a)
//	{
//		std::cout << "apple init" << std::endl;
//		std::cin >> *a;
//		std::cout << *a << std::endl;
//	}
//}
//
//
//int	main(int ac, char **av)
//{
//	//int	i;
//	(void)ac;
//	int	j;
//
//	apple::print(av[0]);
//	apple::get(&j);
//	std::cout << j << std::endl;
//	orange::print(av[0]);
//	orange::get(&j);
//	std::cout << j << std::endl;
//}
//
//learn classes
//
//class Phone
//{
//	public:
//		Phone(char a, int d);
//		~Phone(void);
//		//Phone(void);
//		//~Phone(void);
//		void	ll(void);
//		void	hey(char *str);
//		void	hey(int a);
//		//void	ok(int const value) const;
//		//int	const j;
//		int	c;
//		char s;
//		int d;
//
//	private:
//		int p;
//		void	_ll(void);
//};
//
//#include "phonebook.hpp"
//
////Phone::Phone(void) : c (11), d(10), p(12)
////Phone::Phone(char a, int d) : j(d), s(a), p(d)
//Phone::Phone(char a, int d) : s(a), p(d)
//{
//	char ptr[5] = "heyl";
//	std::cout << "Constructer called" << std::endl;
//	std::cout << p << "     " << s << std::endl;
//	//you can initilize it like that or using initialization list
//	//this->p = 9;
//	//this->d = 99;
//	this->hey(ptr);
//	//this->ok(d);
//	this->ll();
//	this->_ll();
//}
//
//void	Phone::_ll(void)
//{
//	std::cout << "private _ll" << std::endl;
//}
//
//void	Phone::ll(void)
//{
//	std::cout << "public ll" << std::endl;
//}
//
//Phone::~Phone(void)
//{
//	std::cout << "Distructer called" << std::endl;
//}
//
//void	Phone::hey(char *str)
//{
//	//d = 22;
//	//p = 22;
//	//std::cout << str << "     "<< data->p << "    " << data->d << std::endl;
//	std::cout << str << "     "<< p << "    " << d << std::endl;
//	std::cout << p << "     " << s << std::endl;
//}
//
////void	Phone::ok(int const value) const
////{
////	this->c = 33;
////	//this->j = value;
////}
//
//void	Phone::hey(int a)
//{
//	std::cout << a << std::endl;
//}
//
//int	main(int ac, char **av)
//{
//	(void)ac;
//	(void)av;
//	Phone	data('b', 9);
//	//Phone	data1('g', 8);
//	//data.hey(44);
//	//Phone	data;
//	//if (ac == 1)
//	//{
//	//	Phone	ll();
//	//	data.hey(av[0]);
//	//	//data.hey(22);
//	//}
//	//std::cout << data.d << std::endl;
//	//data = new Phone();
//	//delete data;
//}
