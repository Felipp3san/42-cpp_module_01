/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 17:34:41 by fde-alme          #+#    #+#             */
/*   Updated: 2025/11/20 19:20:13 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int getLevelIndex(const std::string& level)
{
    std::string levels[] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR",
    };

    for (size_t i = 0; i < sizeof(levels) / sizeof(std::string); i++)
    {
        if (level == levels[i])
            return (i);
    }
    return (-1);
}

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: ./harlFilter <message>\n";
        return (1);
    }

    std::string level = argv[1];
    Harl harl;

    switch (getLevelIndex(level))
    {
    case 0:
        std::cout << "[ DEBUG ]\n";
        harl.complain("DEBUG");
        __attribute__((fallthrough));
    case 1:
        std::cout << "[ INFO ]\n";
        harl.complain("INFO");
        __attribute__((fallthrough));
    case 2:
        std::cout << "[ WARNING ]\n";
        harl.complain("WARNING");
        __attribute__((fallthrough));
    case 3:
        std::cout << "[ ERROR ]\n";
        harl.complain("ERROR");
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]\n";
        break;
    };

    return (0);
}
