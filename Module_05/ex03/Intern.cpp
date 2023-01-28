/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:31:57 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/25 18:07:46 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{
	std::cout << "Intern Default constructer called!" << std::endl;
}

Intern::Intern(Intern const & obj)
{
	std::cout << "Intern Default constructer called!" << std::endl;
	*this = obj;
}

Intern & Intern::operator=(Intern const & obj)
{
	std::cout << "Intern copy assignment called!" << std::endl;
	(void)obj;
	return (*this);
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	if (name.empty() || target.empty())
		return (0);
	AForm *form[3];
	form[0] = new RobotomyRequestForm(target, 72, 45);
	form[1] = new PresidentialPardonForm(target, 25, 5);
	form[2] = new ShrubberyCreationForm(target, 145, 137);
	std::string forms[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	for (int	i = 0; i < 3; i++)
	{
		if (!name.compare(forms[i]))
		{
			for (int	j = i + 1; j < 3; j++)
				delete form[j];
			return (form[i]);
		}
		delete form[i];
	}
	return (0);
}

Intern::~Intern(void)
{
	std::cout << "Intern Default destructer called!" << std::endl;
}
