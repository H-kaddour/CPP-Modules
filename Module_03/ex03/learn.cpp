/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   learn.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:14:41 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/10 13:13:18 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	parent
{
	public:
		parent(void) { std::cout << "parent constructer." << std::endl; };
		~parent(void) { std::cout << "parent destructer." << std::endl; };
		void	ll(void) { std::cout << "nn" << std::endl; };
		void	print(void) { std::cout << "hey from parent." << std::endl; };
};

class child : public parent
{
	public:
		child(void) { std::cout << "child constructer." << std::endl; };
		~child(void) { std::cout << "child destructer." << std::endl; };
		void	ll(void) { std::cout << "okkkkkkkkk" << std::endl; };
		void	print(void) { std::cout << "hey from child." << std::endl; };
};

int	main()
{
	//parent *p = new child();
	child c;

	//p->print();
	//p->ll();
	c.print();
	//c->print();
}
