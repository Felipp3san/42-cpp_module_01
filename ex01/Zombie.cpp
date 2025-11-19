/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:36:58 by fde-alme          #+#    #+#             */
/*   Updated: 2025/11/19 11:18:27 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void) : _name("Unknown"){};

Zombie::Zombie(std::string name) : _name(name){};

Zombie::~Zombie(void){
	std::cout << "Zombie " << _name << " Killed. (Wasn't it dead already?)"
		<< std::endl;
};

void	Zombie::announce(void)
{
	std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(const std::string &name)
{
	_name = name;
}
