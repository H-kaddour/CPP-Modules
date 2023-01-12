/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 13:01:19 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/11 13:22:19 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	mf("mf");
	DiamondTrap	doom("doom");
	mf.Attack_setter(3);
	doom.Attack_setter(2);

	mf.attack(doom.Name_getter());
	doom.takeDamage(mf.Attack_getter());
	doom.beRepaired(2);
	doom.Attack_setter(doom.Attack_getter());
	doom.attack(mf.Name_getter());
	mf.takeDamage(doom.Attack_getter());
	mf.beRepaired(2);
	doom.whoAmI();
}
