/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:51:34 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/25 11:10:28 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	bureau("zaz", 12);
	Bureaucrat	l(bureau);
	std::cout << l << std::endl;
	bureau.increment();
	bureau.decrement();
	std::cout << bureau << std::endl;

	return (0);
}
