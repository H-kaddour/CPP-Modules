/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:34:37 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/18 16:13:33 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	Brain	*brain;
	public:
		Dog(void);
		Dog(Dog const & obj);
		~Dog(void);
		void	makeSound(void) const;
		Dog & operator=(Dog const & obj);
};
