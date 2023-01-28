/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:54:23 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/25 19:40:26 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm Default constructer called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name, int sign, int exec) \
		: AForm(name, sign, exec)
{
	std::cout << "RobotomyRequestForm Init constructer called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & obj)
{
	std::cout << "RobotomyRequestForm copy constructer called!" << std::endl;
	*this = obj;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & obj)
{
	std::cout << "RobotomyRequestForm copy assignment." << std::endl;
	AForm::operator=(obj);
	return (*this);
}

int	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (this->checkExec(executor))
			throw (GradeTooLowException());
		if (this->getGradeSign() != 72 || this->getGradeExec() != 45)
			return (0);
		srand(time(0));
		if (rand() % 100 + 1 <= 50)
		{
			std::cout << "Drilling noise, Mmmm Fooood..." << std::endl;
			std::cout << this->getName() << " has been robotomized successfully 50% of the time." << std::endl;
		}
		else
			std::cout << "robotomy failed :v" << std::endl;
		return (1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		return (0);
	}
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm Default Destructer called!" << std::endl;
}
