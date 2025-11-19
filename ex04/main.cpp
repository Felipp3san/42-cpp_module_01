/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 16:28:15 by fde-alme          #+#    #+#             */
/*   Updated: 2025/11/19 17:34:59 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Replacer.hpp"


int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	std::string	filename = std::string(argv[1]);
	std::string	s1 = std::string(argv[2]);
	std::string	s2 = std::string(argv[3]);

	if (s1.empty())
	{
		std::cout << "Error: s1 cannot be empty." << std::endl;
		return (1);
	}

	Replacer replacer(filename, s1, s2);
	if (!replacer.process())
		return (1);
	return (0);
}
