/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:57:13 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/27 22:59:12 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	std::srand(time(0));
	int	i = (rand() % 3);
	switch (i)
	{
		case 0:
				return (new A);
		case 1:
				return (new B);
		case 2:
				return (new C);
	}
	return (0);
}

void identify(Base* p)
{
	Base	*ptr;
	int	i = 0;
	std::string msg[3] = {"type A", "type B", "type C"};
	while (i < 3)
	{
		if (!i)
			ptr = dynamic_cast<A*>(p);
		else if (i == 1)
			ptr = dynamic_cast<B*>(p);
		else
			ptr = dynamic_cast<C*>(p);
		if (ptr)
		{
			std::cout << msg[i] << std::endl;
			return ;
		}
		i++;
	}
}

void identify(Base& p)
{
	try
	{
		Base &ptr = dynamic_cast<A&>(p);
		(void)ptr;
		std::cout << "type A" << std::endl;
		return ;
	}
	catch (...)
	{
		try
		{
			Base &ptr = dynamic_cast<B&>(p);
			(void)ptr;
			std::cout << "type B" << std::endl;
			return ;
		}
		catch (...)
		{
			Base &ptr = dynamic_cast<C&>(p);
			(void)ptr;
			std::cout << "type C" << std::endl;
			return ;
		}
	}
}
