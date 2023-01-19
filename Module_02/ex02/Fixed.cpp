/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:03:56 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/16 13:59:53 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/************ Arithemitic Operators ***************/
Fixed Fixed::operator+(const Fixed & obj)
{
	return (this->toFloat() + obj.toFloat());
}

Fixed	Fixed::operator-(const Fixed & obj)
{
	return (this->toFloat() - obj.toFloat());
}

Fixed Fixed::operator*(const Fixed & obj)
{
	return (this->toFloat() * obj.toFloat());
}

Fixed Fixed::operator/(const Fixed & obj)
{
	return (this->toFloat() / obj.toFloat());
}

/******* Increment & decrement Operators *******/
Fixed & Fixed::operator--(void)
{
	--this->value;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed decr(this->toFloat());
	--this->value;
	return (decr);
}

Fixed & Fixed::operator++(void)
{
	++this->value;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed incr(this->toFloat());
	++this->value;
	return (incr);
}

/************ Comparison Operators ***************/
bool	Fixed::operator>(const Fixed & obj) const
{
	return (this->toFloat() > obj.toFloat() ? true : false);
}

bool	Fixed::operator<(const Fixed & obj) const
{
	return (this->toFloat() < obj.toFloat() ? true : false);
}

bool	Fixed::operator>=(const Fixed & obj) const
{
	return (this->toFloat() >= obj.toFloat() ? true : false);
}

bool	Fixed::operator<=(const Fixed & obj) const
{
	return (this->toFloat() <= obj.toFloat() ? true : false);
}

bool	Fixed::operator==(const Fixed & obj) const
{
	return (this->toFloat() == obj.toFloat() ? true : false);
}

bool	Fixed::operator!=(const Fixed & obj) const
{
	return (this->toFloat() != obj.toFloat() ? true : false);
}

/************ Member func ***************/
Fixed & Fixed::min(Fixed & obj1, Fixed & obj2)
{
	return (obj1 < obj2 ? obj1 : obj2);
}

const	Fixed & Fixed::min(const Fixed & obj1, const Fixed & obj2)
{
	return (obj1 < obj2 ? obj1 : obj2);
}

Fixed & Fixed::max(Fixed & obj1, Fixed & obj2)
{
	return (obj1 > obj2 ? obj1 : obj2);
}

const	Fixed & Fixed::max(const Fixed & obj1, const Fixed & obj2)
{
	return (obj1 > obj2 ? obj1 : obj2);
}

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
