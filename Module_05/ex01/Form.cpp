/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 17:00:25 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/25 11:19:21 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : name("Form"), sign(false), grade_sign(1), grade_exec(0)
{
	std::cout << "Form Default constructer!" << std::endl;
}

Form::Form(Form & obj) : name(obj.name), grade_sign(obj.grade_sign), grade_exec(obj.grade_exec)
{
	std::cout << "Form Copy constructer called!" << std::endl;
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

Form::Form(std::string name, int si) : name(name), sign(false), grade_sign(si), grade_exec(0)
{
	std::cout << "Form Init constructer called!" << std::endl;
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

Form &	Form::operator=(Form const & obj)
{
	this->sign = obj.sign;
	return (*this);
}

const	std::string	Form::getName(void)
{
	return (this->name);
}

bool	Form::getSign(void)
{
	return (this->sign);
}

int	Form::getGradeSign(void)
{
	return (this->grade_sign);
}

int	Form::getGradeExec(void)
{
	return (this->grade_exec);
}

void	Form::beSigned(Bureaucrat & obj)
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

Form::~Form(void)
{
	std::cout << "Form Default destructer!" << std::endl;
}

const	char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const	char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

std::ostream & operator<<(std::ostream & os, Form & obj)
{
	os << obj.getName() << ", form grade " << obj.getGradeSign() << ".";
	return (os);
}
