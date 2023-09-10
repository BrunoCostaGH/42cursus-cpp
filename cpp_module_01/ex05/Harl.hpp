/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:02:13 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/06/14 14:33:45 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl
{
	void debug();
	void info();
	void warning();
	void error();
	typedef void (Harl::*fnPrototype)();

public:
	void complain(const std::string& level);
};

#endif /* HARL_HPP */
