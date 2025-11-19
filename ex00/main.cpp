/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:47:21 by fde-alme          #+#    #+#             */
/*   Updated: 2025/11/19 10:54:40 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie1;

	zombie1 = newZombie("Daryl Dixon");
	zombie1->announce();
	delete zombie1;

	randomChump("Rick Grimes");
	return (0);
}
