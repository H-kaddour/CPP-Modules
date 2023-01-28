/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:54:27 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/25 15:21:31 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class	RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string name, int sign, int exec);
		RobotomyRequestForm(RobotomyRequestForm & obj);
		~RobotomyRequestForm(void);
		int	execute(Bureaucrat const & executor) const;
		RobotomyRequestForm & operator=(RobotomyRequestForm const & obj);
};
