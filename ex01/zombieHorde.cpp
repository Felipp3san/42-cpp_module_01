/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 11:07:39 by fde-alme          #+#    #+#             */
/*   Updated: 2025/11/19 11:27:51 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);

	Zombie *zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombies[i].setName(name);

	return (zombies);
}
