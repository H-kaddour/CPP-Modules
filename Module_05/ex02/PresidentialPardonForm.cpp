/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:03:19 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/25 19:42:57 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm Default constructer called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name, int sign, int exec) \
		: AForm(name, sign, exec)
{
	std::cout << "PresidentialPardonForm Init constructer called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm & obj)
{
	std::cout << "PresidentialPardonForm copy constructer called!" << std::endl;
	*this = obj;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & obj)
{
	std::cout << "PresidentialPardonForm copy assignment." << std::endl;
	AForm::operator=(obj);
	return (*this);
}

int	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (this->checkExec(executor))
			throw (GradeTooLowException());
		if (this->getGradeSign() != 25 || this->getGradeExec() != 5)
			return (0);
		std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
		return (1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		return (0);
	}
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm Default Destructer called!" << std::endl;
}
