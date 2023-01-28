/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:51:34 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/25 19:41:34 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

//void	tst(void)
//{
//	system("leaks Bureaucrat");
//}

int	main(void)
{
	AForm *form[3];
	std::cout << "----------- ShrubberyCreationForm ------------" << std::endl;
	Bureaucrat bureau("zaz_shr", 100);
	form[0] = new ShrubberyCreationForm("zaz", 145, 137);
	form[0]->beSigned(bureau);
	bureau.executeForm(*form[0]);
	std::cout << "----------- RobotomyRequestForm --------------" << std::endl;
	Bureaucrat bureau1("loz_rob", 50);
	form[1] = new RobotomyRequestForm("loz", 72, 45);
	form[1]->beSigned(bureau1);
	bureau1.executeForm(*form[1]);
	std::cout << "----------- PresidentialPardonForm -----------" << std::endl;
	Bureaucrat bureau2("noize_pre", 20);
	form[2] = new PresidentialPardonForm("noize", 25, 5);
	form[2]->beSigned(bureau2);
	bureau2.executeForm(*form[2]);
	std::cout << "----------------------------------------------" << std::endl << std::endl;
	for (int	i = 0; i < 3; i++)
		delete form[i];
	//atexit(tst);
	return (0);
}
