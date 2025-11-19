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

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) :
	_type(type)
{};

Weapon::~Weapon(void)
{
	std::cout << "Weapon " << _type << " destroyed." << std::endl;
}

void Weapon::setType(const std::string &type)
{
	_type = type;
}

const std::string &Weapon::getType(void)
{
	return (_type);
}
