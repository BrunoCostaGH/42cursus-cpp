/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:00:22 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/07/18 21:25:55 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();									// default constructor
	WrongCat(WrongCat& value);					// copy constructor
	WrongCat& operator=(const WrongCat& value);	// copy assignment operator overflow
	~WrongCat();								// destructor
};

#endif /* WRONGCAT_HPP */
