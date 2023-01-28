/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 17:00:25 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/25 15:24:35 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : name("default"), sign(false), grade_sign(1), grade_exec(1)
{
	std::cout << "AForm Default constructer!" << std::endl;
}

AForm::AForm(AForm & obj) : name(obj.name), grade_sign(obj.grade_sign), grade_exec(obj.grade_exec)
{
	std::cout << "AForm Copy constructer called!" << std::endl;
	*this = obj;
	try
	{
		if (this->grade_sign < 1)
			throw (GradeTooHighException());
		else if (this->grade_sign > 150)
			throw (GradeTooLowException());
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

AForm::AForm(std::string name, int g_sign, int g_exec) \
		: name(name), sign(false), grade_sign(g_sign), grade_exec(g_exec)
{
	std::cout << "AForm Init constructer called!" << std::endl;
	try
	{
		if (this->grade_sign < 1)
			throw (GradeTooHighException());
		else if (this->grade_sign > 150)
			throw (GradeTooLowException());
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

AForm &	AForm::operator=(AForm const & obj)
{
	this->sign = obj.sign;
	return (*this);
}

const	std::string	AForm::getName(void) const
{
	return (this->name);
}

bool	AForm::getSign(void) const
{
	return (this->sign);
}

int	AForm::getGradeSign(void) const
{
	return (this->grade_sign);
}

int	AForm::getGradeExec(void) const
{
	return (this->grade_exec);
}

void	AForm::beSigned(Bureaucrat & obj)
{
	try
	{
		if (obj.getGrade() <= this->getGradeSign())
			this->sign = true;
		else if (obj.getGrade() < 0)
			throw (GradeTooLowException());
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

int	AForm::checkExec(Bureaucrat const & executor) const
{
	if (this->getSign() && executor.getGrade() < this->getGradeSign())
		return (0);
	return (1);
}

AForm::~AForm(void)
{
	std::cout << "AForm Default destructer!" << std::endl;
}

const	char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const	char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

std::ostream & operator<<(std::ostream & os, AForm & obj)
{
	os << obj.getName() << ", AForm grade " << obj.getGradeSign() << ".";
	return (os);
}
