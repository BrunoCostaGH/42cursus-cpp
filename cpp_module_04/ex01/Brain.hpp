/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:30:39 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/21 17:42:40 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	std::string ideas[100];
public:
	Brain(void);							// default constructor
	Brain(Brain& value);					// copy constructor
	Brain& operator=(const Brain& value);	// copy assignment operator overflow
	~Brain(void);							// destructor
};

#endif /* BRAIN_HPP */
