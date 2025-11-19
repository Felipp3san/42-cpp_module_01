/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 11:49:08 by fde-alme          #+#    #+#             */
/*   Updated: 2025/11/19 16:11:01 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string &name) :
	_name(name),
	_weapon(NULL)
{};

HumanB::~HumanB(void)
{
	std::cout << "Human " << _name << " killed." << std::endl;
}

void	HumanB::attack(void)
{
	if (_weapon != NULL)
		std::cout << _name << " attacks with their " 
				  << _weapon->getType() << std::endl;
	else
		std::cout << _name << " has no weapon." << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
