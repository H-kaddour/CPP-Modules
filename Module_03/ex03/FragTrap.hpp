/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:56:42 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/11 13:01:26 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const FragTrap & obj);
		FragTrap(std::string _Name);
		~FragTrap(void);
		void	highFivesGuys(void);
		FragTrap & operator=(const FragTrap & obj);
};
