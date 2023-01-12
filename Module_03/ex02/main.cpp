/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 13:01:19 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/11 12:53:59 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	mf("mf");
	FragTrap	doom("doom");
	ScavTrap	moby("moby");
	mf.Attack_setter(3);
	doom.Attack_setter(2);
	moby.Attack_setter(2);

	mf.attack(doom.Name_getter());
	mf.attack(moby.Name_getter());
	doom.takeDamage(mf.Attack_getter());
	moby.takeDamage(mf.Attack_getter());
	doom.beRepaired(2);
	moby.beRepaired(2);
}
