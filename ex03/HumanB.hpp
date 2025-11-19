/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 11:45:14 by fde-alme          #+#    #+#             */
/*   Updated: 2025/11/19 12:02:31 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon		*_weapon;
public:
	HumanB(const std::string &name);
	~HumanB(void);
	void		attack(void);
	void		setWeapon(Weapon &weapon);
};

#endif
