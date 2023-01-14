/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:34:37 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/13 11:23:59 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "animal.hpp"
#include "brain.hpp"

class	Dog : public Animal
{
	Brain	*brain;
	public:
		Dog(void);
		Dog(std::string name);
		Dog(Dog const & obj);
		~Dog(void);
		void	makeSound(void) const;
		Dog & operator=(Dog const & obj);
};
