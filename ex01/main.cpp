/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 11:19:57 by fde-alme          #+#    #+#             */
/*   Updated: 2025/11/19 11:28:15 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    const int maxZombies = 10;
    Zombie* zombies      = NULL;

    zombies = zombieHorde(maxZombies, "All as one");

    for (int i = 0; i < maxZombies; i++)
    {
        zombies[i].announce();
    }

    delete[] zombies;

    return (0);
}
