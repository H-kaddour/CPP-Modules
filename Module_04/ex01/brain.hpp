/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:16:02 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/18 16:06:56 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class	Brain
{
	std::string	ideas[100];
	public:
		Brain(void);
		Brain(Brain const & obj);
		~Brain(void);
		Brain & operator=(Brain const & obj);
};
