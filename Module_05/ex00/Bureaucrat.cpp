/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:19:05 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/25 18:24:41 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : grade(1)
{
	std::cout << "Bureaucrat Default constructer!" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & obj) : name(obj.name)
{
	std::cout << "Copy constructer called!" << std::endl;
	*this = obj;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & obj)
{
	this->grade = obj.grade;
	return (*this);
}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name)
{
	std::cout << "Bureaucrat Init constructer!" << std::endl;
	try
	{
		if (_grade > 0 && _grade <= 150)
			this->grade = _grade;
		else if (_grade > 150)
			throw (GradeTooLowException());
		else
			throw (GradeTooHighException());
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

std::string	Bureaucrat::getName(void)
{
	return (this->name);
}

int	Bureaucrat::getGrade(void)
{
	return (this->grade);
}

void	Bureaucrat::increment(void)
{
	try
	{
		if(this->grade == 1)
				throw (GradeTooHighException());
		this->grade--;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::decrement(void)
{
	try
	{
		if(this->grade == 150)
				throw (GradeTooLowException());
		this->grade++;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

const	char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const	char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

std::ostream	&	operator<<(std::ostream & os, Bureaucrat & obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return (os);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat Default Destructer!" << std::endl;
}
