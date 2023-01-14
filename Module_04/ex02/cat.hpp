/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:34:40 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/13 11:23:12 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "animal.hpp"
#include "brain.hpp"

class	Cat : public Animal
{
	Brain	*brain;
	public:
		Cat(void);
		Cat(std::string name);
		Cat(Cat const & obj);
		~Cat(void);
		void	makeSound(void) const;
		Cat & operator=(Cat const & obj);
};
