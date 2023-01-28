/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:55:46 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/25 15:21:04 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class AForm
{
	const std::string name;
	bool	sign;
	const int	grade_sign;
	const int	grade_exec;
	public:
		AForm(void);
		AForm(AForm & obj);
		AForm(std::string name, int g_sign, int g_exec);
		virtual	~AForm(void);
		AForm & operator=(AForm const & obj);

		const std::string getName(void) const;
		bool	getSign(void) const;
		int getGradeSign(void) const;
		int getGradeExec(void) const;

		void	beSigned(Bureaucrat & obj);

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
		virtual int	execute(Bureaucrat const & executor) const = 0;
		int	checkExec(Bureaucrat const & executor) const;
};

std::ostream & operator<<(std::ostream & os, AForm & obj);
