/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:51:34 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/25 11:21:13 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main(void)
{
	Bureaucrat bureau("zaz", 1);
	Form	form("loz", 9);
	bureau.increment();
	bureau.decrement();
	form.beSigned(bureau);
	bureau.signForm(form);
	std::cout << bureau << std::endl;
	std::cout << form << std::endl;

	return (0);
}
