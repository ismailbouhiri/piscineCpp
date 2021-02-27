/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 18:40:14 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/27 12:11:33 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
	this->setName(name);
	std::cout << "[ CREATE THE HUMAN-B INSTANCE ]" << std::endl;
}

HumanB::~HumanB( void )
{
	std::cout << "[ DESTROY THE HUMAN-B INSTANCE ]" << std::endl;
}

std::string	HumanB::getName( void )
{
	return this->_name;
}

void	HumanB::setName( std::string name )
{
	this->_name = name;
}

void		HumanB::attack( void )
{
	std::cout << this->_name << " attacks with his " << this->getWeapon().getType() << std::endl;
}

Weapon&		HumanB::getWeapon( void )
{
	return *this->_weapon;
}

void		HumanB::setWeapon( Weapon& myWeapon )
{
	this->_weapon = &myWeapon;
}