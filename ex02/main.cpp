/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 11:30:39 by fde-alme          #+#    #+#             */
/*   Updated: 2025/11/19 11:40:16 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str        = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "=== ADDRESS ===\n";
    // Print the address of str
    std::cout << &str << '\n';
    // Print the address held by stringPTR
    std::cout << stringPTR << '\n';
    // Print the address held by stringREF
    std::cout << &stringREF << '\n';

    std::cout << "\n=== VALUE ===\n";
    // Print the value of str
    std::cout << str << '\n';
    // Print the value pointed to by stringPTR
    std::cout << *stringPTR << '\n';
    // Print the value pointed to by stringREF
    std::cout << stringREF << '\n';

    return (0);
}
