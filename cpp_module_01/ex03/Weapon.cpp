/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:43:10 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/06/13 15:12:58 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::Weapon(const std::string& value)
{
	this->type = value;
}

const std::string& Weapon::getType()
{
	return (this->type);
}

void	Weapon::setType(const std::string& value)
{
	this->type = value;
}
