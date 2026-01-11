/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 11:52:20 by fde-alme          #+#    #+#             */
/*   Updated: 2025/11/19 16:10:00 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(const std::string& type)
    : _type(type) {};

Weapon::~Weapon()
{
    std::cout << "Weapon " << _type << " destroyed.\n";
}

void Weapon::setType(const std::string& type)
{
    _type = type;
}

const std::string& Weapon::getType()
{
    return (_type);
}
