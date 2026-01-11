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

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, Weapon& weapon)
    : _name(name)
    , _weapon(weapon) {};

HumanA::~HumanA()
{
    std::cout << "Human " << _name << " killed." << '\n';
}

void HumanA::attack()
{
    std::cout << _name << " attacks with their " << _weapon.getType() << '\n';
}
