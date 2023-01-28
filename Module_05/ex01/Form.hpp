/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:55:46 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/25 18:46:45 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Form
{
	const std::string name;
	bool	sign;
	const int	grade_sign;
	const int	grade_exec;
	public:
		Form(void);
		Form(Form & obj);
		Form(std::string name, int grade);
		~Form(void);
		Form & operator=(Form const & obj);

		const std::string getName(void);
		bool	getSign(void);
		int getGradeSign(void);
		int getGradeExec(void);

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
};

std::ostream & operator<<(std::ostream & os, Form & obj);
