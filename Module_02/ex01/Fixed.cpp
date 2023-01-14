/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:10:33 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/14 16:13:19 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : value(0)
{
	std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed(Fixed const & obj) : value(obj.value)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = obj;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called." << std::endl;
	this->value = value * (1 << this->bits);
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called." << std::endl;
	this->value = roundf(value * (1 << this->bits));
}

float	Fixed::toFloat(void) const
{
	return ((float)this->value / (1 << this->bits));
}

int	Fixed::toInt(void) const
{
	return (roundf(this->value / (1 << this->bits)));
}

Fixed	& Fixed::operator=(const Fixed & obj)
{
	std::cout << "Copy assignment operator called." << std::endl;
	this->value = obj.value;
	return (*this);
}

std::ostream & operator<<(std::ostream & os, const Fixed & obj)
{
	os << obj.toFloat();
	return (os);
}

int	Fixed::getRawBits(void) const
{
	return (this->value);
}

int	Fixed::getter(void) const
{
	return (this->value);
}

Fixed::~Fixed(void)
{
	std::cout << "Deconstructor called." << std::endl;
}
