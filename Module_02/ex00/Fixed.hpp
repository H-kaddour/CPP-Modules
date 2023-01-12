/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:07:45 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/12 12:37:14 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Fixed
{
	int	value;
	static const int	bits = 8;
	public:
		Fixed(void);
		Fixed(Fixed const & obj);
		Fixed & operator=(const Fixed & obj);
		~Fixed(void);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};
