/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 10:55:12 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/15 11:41:32 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Cure
{
	public:
		Cure(void);
		Cure(Cure const & obj);
		~Cure(void);
		Cure & operator=(Cure & obj);
		Cure * clone(void) const;
};
