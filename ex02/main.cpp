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

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "=== ADDRESS ===" << std::endl;
	// Print the address of str
	std::cout << &str << std::endl;
	// Print the address held by stringPTR
	std::cout << stringPTR << std::endl;
	// Print the address held by stringREF
	std::cout << &stringREF << std::endl;

	std::cout << "\n=== VALUE ===" << std::endl;
	// Print the value of str
	std::cout << str << std::endl;
	// Print the value pointed to by stringPTR
	std::cout << *stringPTR << std::endl;
	// Print the value pointed to by stringREF
	std::cout << stringREF << std::endl;

	return (0);
}
