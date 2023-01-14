/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:30:43 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/13 12:50:13 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#define size 10

class	Animal
{
	protected:
		std::string	type;
	public:
		Animal(void);
		Animal(std::string name);
		Animal(Animal const & obj);
		virtual	~Animal(void);
		std::string	getType(void) const;
		virtual void	makeSound(void) const;
		Animal & operator=(Animal const & obj);
};
