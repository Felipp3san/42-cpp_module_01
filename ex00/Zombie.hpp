/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:34:56 by fde-alme          #+#    #+#             */
/*   Updated: 2025/11/19 10:52:55 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
	std::string _name;
public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
	void	announce(void);
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif
