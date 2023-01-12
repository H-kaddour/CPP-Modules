/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:59:16 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/12 12:35:11 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/************ Arithemitic Operators ***************/
Fixed &	Fixed::operator+(const Fixed & obj)
{
	this->value += obj.value;
	return (*this);
}

Fixed &	Fixed::operator-(const Fixed & obj)
{
	this->value -= obj.value;
	return (*this);
}

Fixed	Fixed::operator*(const Fixed & obj)
{
	Fixed	mult(this->toFloat() * obj.toFloat());
	return (mult);
}

Fixed Fixed::operator/(const Fixed & obj)
{
	Fixed	div(this->toFloat() / obj.toFloat());
	return (div);
}



/******* Increment & decrement Operators *******/
Fixed Fixed::operator--(void)
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

Fixed Fixed::operator++(void)
{
	++this->value;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	//Fixed	incr(this->value);
	Fixed incr(this->toFloat());
	++this->value;
	//return (*this);
	return (incr);
}



/************ Comparison Operators ***************/
bool	Fixed::operator>(const Fixed & obj)
{
	std::cout << "h" << std::endl;
	return (this->toFloat() > obj.toFloat() ? true : false);
}

bool	Fixed::operator<(const Fixed & obj)
{
	return (this->toFloat() < obj.toFloat() ? true : false);
}

bool	Fixed::operator>=(const Fixed & obj)
{
	return (this->toFloat() >= obj.toFloat() ? true : false);
}

bool	Fixed::operator<=(const Fixed & obj)
{
	return (this->toFloat() <= obj.toFloat() ? true : false);
}

bool	Fixed::operator==(const Fixed & obj)
{
	return (this->toFloat() == obj.toFloat() ? true : false);
}

bool	Fixed::operator!=(const Fixed & obj)
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
	return (obj1.toFloat() < obj2.toFloat() ? obj1 : obj2);
}

Fixed & Fixed::max(Fixed & obj1, Fixed & obj2)
{
	return (obj1 > obj2 ? obj1 : obj2);
}

const Fixed & Fixed::max(const Fixed & obj1, const Fixed & obj2)
{
	return (obj1.toFloat() > obj2.toFloat() ? obj1 : obj2);
}


int	main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.0f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	return (0);
}
