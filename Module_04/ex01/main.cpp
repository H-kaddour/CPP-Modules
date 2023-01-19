/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:30:40 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/19 15:14:30 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal **arr;

	arr = new Animal*[size];
	for (int i = 0; i < size; i++)
	{
		if (i < size / 2)
			arr[i] = new Dog();
		else
			arr[i] = new Cat();
	}
	for (int i = 0; i < size; i++)
		delete arr[i];
	delete arr;

	return (0);
}
