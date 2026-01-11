/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:36:58 by fde-alme          #+#    #+#             */
/*   Updated: 2025/11/19 11:12:35 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
    : _name("Unknown") {};

Zombie::Zombie(std::string name)
    : _name(name) {};

Zombie::~Zombie()
{
    std::cout << "Zombie " << _name << " Killed. (Wasn't it dead already?)\n";
};

void Zombie::announce()
{
    std::cout << _name << ": " << "BraiiiiiiinnnzzzZ...\n";
}
