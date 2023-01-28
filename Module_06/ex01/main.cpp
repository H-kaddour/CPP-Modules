/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:25:41 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/27 22:15:41 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int	main()
{
	Data	data = {10, 0, 0};
	data.ser = serialize(&data);
	data.des = deserialize(data.ser);
}
