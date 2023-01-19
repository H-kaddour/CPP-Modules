/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:19:39 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/15 11:41:39 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Ice
{
	public:
		Ice(void);
		Ice(Ice const & obj);
		~Ice(void);
		Ice & operator=(Ice & obj);
		Ice * clone(void) const;
};
