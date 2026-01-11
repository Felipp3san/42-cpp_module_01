/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 11:45:14 by fde-alme          #+#    #+#             */
/*   Updated: 2025/11/19 16:15:32 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
private:
    std::string _name;
    Weapon& _weapon;

public:
    HumanA(const std::string& name, Weapon& weapon);
    ~HumanA();
    void attack();
};

#endif
