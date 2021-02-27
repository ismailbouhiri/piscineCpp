/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 18:40:21 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/27 12:09:50 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
	this->setType(type);
	std::cout << "[ CREATE THE WEAPON INSTANCE ]" << std::endl;
}

Weapon::~Weapon( void )
{
	std::cout << "[ DESTROY THE WEAPON INSTANCE ]" << std::endl;
}

const std::string&	Weapon::getType( void )
{
	return this->_Type;
}

void	Weapon::setType( std::string type )
{
	this->_Type = type;
}

