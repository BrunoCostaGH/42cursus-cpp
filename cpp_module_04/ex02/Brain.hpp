/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:30:39 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/20 17:30:39 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain& value);
	Brain& operator=(const Brain& value);
	~Brain();
};

#endif /* BRAIN_HPP */
