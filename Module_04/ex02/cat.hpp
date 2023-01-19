/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:34:40 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/18 16:13:25 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	Brain	*brain;
	public:
		Cat(void);
		Cat(Cat const & obj);
		~Cat(void);
		void	makeSound(void) const;
		Cat & operator=(Cat const & obj);
};
