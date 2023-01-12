/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:34:37 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/12 21:40:04 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "animal.hpp"

class	Dog : public Animal
{
	public:
		Dog(void);
		Dog(std::string name);
		Dog(Dog const & obj);
		~Dog(void);
		void	makeSound(void) const;
		Dog & operator=(Dog const & obj);

};
