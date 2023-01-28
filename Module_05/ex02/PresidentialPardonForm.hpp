/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:03:34 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/25 15:21:13 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string name, int sing, int exec);
		PresidentialPardonForm(PresidentialPardonForm & obj);
		~PresidentialPardonForm(void);
		int	execute(Bureaucrat const & executor) const;
		PresidentialPardonForm & operator=(PresidentialPardonForm const & obj);
};
