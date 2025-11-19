/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 17:21:44 by fde-alme          #+#    #+#             */
/*   Updated: 2025/11/19 18:08:05 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
# define REPLACER_HPP

#include <string>

class Replacer
{
private:
	std::string	_filename;
	std::string	_s1;
	std::string	_s2;
public:
	Replacer(const std::string &filename, const std::string &s1, const std::string &s2);
	~Replacer(void);
	bool		process(void);
private:
	std::string	replace(const std::string &line) const;
};

#endif
