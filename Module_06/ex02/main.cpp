/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:56:49 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/28 14:38:55 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int	main()
{
	Base	*ptr;

	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
	return (0);
}
