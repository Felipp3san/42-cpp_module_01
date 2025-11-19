/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 11:49:08 by fde-alme          #+#    #+#             */
/*   Updated: 2025/11/19 16:15:22 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string &name, Weapon &weapon) :
	_name(name),
	_weapon(weapon)
{};

HumanA::~HumanA(void)
{
	std::cout << "Human " << _name << " killed." << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with their "
			  << _weapon.getType() << std::endl;
}
