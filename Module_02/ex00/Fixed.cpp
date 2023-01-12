/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:26:13 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/12 12:37:22 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called." << std::endl;
	return (this->value);
}

Fixed & Fixed::operator=(const Fixed & obj)
{
	std::cout << "Copy assignment operator called." << std::endl;
	this->value = obj.value;
	return (*this);
}

Fixed::Fixed(void) : value(0)
{
	std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed(Fixed const & obj)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = obj;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called." << std::endl;
}

