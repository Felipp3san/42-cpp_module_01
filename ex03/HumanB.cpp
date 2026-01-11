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

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name)
    : _name(name)
    , _weapon(NULL) {};

HumanB::~HumanB()
{
    std::cout << "Human " << _name << " killed.\n";
}

void HumanB::attack()
{
    if (_weapon != NULL)
    {
        std::cout << _name << " attacks with their " << _weapon->getType() << '\n';
    }
    else
    {
        std::cout << _name << " has no weapon." << '\n';
    }
}

void HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
}
