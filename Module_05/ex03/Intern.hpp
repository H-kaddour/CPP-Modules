/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:32:14 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/25 17:48:37 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class AForm;
#include <iostream>

class Intern
{
	public:
		Intern(void);
		Intern(Intern const & obj);
		~Intern(void);
		Intern & operator=(Intern const & obj);
		AForm	*makeForm(std::string name, std::string target);
};
