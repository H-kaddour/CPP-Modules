/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:51:56 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/25 14:57:45 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AForm;

class Bureaucrat
{
	const std::string name;
	int	grade;
	public:
		Bureaucrat(void);
		Bureaucrat(Bureaucrat const & obj);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);
		Bureaucrat & operator=(Bureaucrat const & obj);

		std::string	getName(void) const;
		int	getGrade(void) const;
		void	increment(void);
		void	decrement(void);

		class GradeTooHighException : public std::exception
		{
			public:
				const	char *what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				const	char *what() const throw();
		};

		void	signAForm(AForm & obj);
		void	executeForm(AForm const & form);
};

std::ostream & operator<<(std::ostream & os, Bureaucrat & obj);
