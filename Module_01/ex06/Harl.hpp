/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:19:46 by hkaddour          #+#    #+#             */
/*   Updated: 2022/11/23 16:05:47 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class	Harl
{
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	public:
		Harl(void);
		~Harl(void);
		void	complain(std::string level);
};
