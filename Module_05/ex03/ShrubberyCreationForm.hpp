/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 23:34:28 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/25 15:21:20 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>

class	ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string name, int sign, int exec);
		ShrubberyCreationForm(ShrubberyCreationForm & obj);
		~ShrubberyCreationForm(void);
		void	tree(void) const;
		int	execute(Bureaucrat const & executor) const;
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & obj);
};
