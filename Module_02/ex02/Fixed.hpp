/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:59:41 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/14 16:10:01 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	int	value;
	static const int	bits = 8;
	public:
		Fixed(void);
		Fixed(std::string name);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(Fixed const & obj);
		~Fixed(void);
		int	getter(void) const;
		float	toFloat(void) const;
		int	toInt(void) const;
		Fixed & operator=(const Fixed & obj);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);

		static	Fixed & min(Fixed & obj1, Fixed & obj2);
		static	const Fixed & min(Fixed const & obj1, Fixed const & obj2);
		static	Fixed & max(Fixed & obj1, Fixed & obj2);
		static	const Fixed & max(Fixed const & obj1, Fixed const & obj2);

		Fixed & operator+(const Fixed & obj);
		Fixed & operator-(const Fixed & obj);
		Fixed operator/(const Fixed & obj);
		Fixed operator*(const Fixed & obj);

		Fixed & operator++(void);
		Fixed  operator++(int);
		Fixed & operator--(void);
		Fixed  operator--(int);

		bool	operator>(const Fixed & obj) const;
		bool	operator<(const Fixed & obj) const;
		bool	operator>=(const Fixed & obj) const;
		bool	operator<=(const Fixed & obj) const;
		bool	operator==(const Fixed & obj) const;
		bool	operator!=(const Fixed & obj) const;

};

std::ostream & operator<<(std::ostream & os, const Fixed & obj);
