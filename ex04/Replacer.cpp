/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 17:24:12 by fde-alme          #+#    #+#             */
/*   Updated: 2025/11/19 18:09:02 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"
#include <fstream>
#include <iostream>
#include <string>

Replacer::Replacer(const std::string& filename, const std::string& s1, const std::string& s2)
    : _filename(filename)
    , _s1(s1)
    , _s2(s2) {};

Replacer::~Replacer()
{
}

std::string Replacer::replace(const std::string& line) const
{
    std::string result;
    size_t found = 0;
    size_t i     = 0;

    i = 0;
    while (i < line.length())
    {
        found = line.find(_s1, i);
        if (found != std::string::npos)
        {
            result += line.substr(i, found - i);
            result += _s2;
            i = found + _s1.length();
        }
        else
        {
            result += line.substr(i);
            i = line.length();
        }
    }
    return (result);
}

bool Replacer::process(void)
{
    std::string line;
    std::ifstream input(_filename.c_str());

    if (!input)
    {
        std::cout << "Error: Could not open input file.\n";
        return (false);
    }

    std::ofstream out((_filename + ".replace").c_str());
    if (!out)
    {
        input.close();
        std::cout << "Error: Could not create output file.\n";
        return (false);
    }

    while (getline(input, line))
    {
        out << replace(line) << '\n';
    }
    input.close();
    out.close();
    return (true);
}
