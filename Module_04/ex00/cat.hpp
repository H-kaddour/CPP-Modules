/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:34:40 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/12 21:40:00 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "animal.hpp"

class	Cat : public Animal
{
	public:
		Cat(void);
		Cat(std::string name);
		Cat(Cat const & obj);
		~Cat(void);
		void	makeSound(void) const;
		Cat & operator=(Cat const & obj);
};
