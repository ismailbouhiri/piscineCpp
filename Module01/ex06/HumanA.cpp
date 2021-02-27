/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 18:40:10 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/27 12:11:41 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& myWeapon )
{
	this->setName(name);
	this->setWeapon(myWeapon);
	std::cout << "[ CREATE THE HUMAN-A INSTANCE ]" << std::endl;
}

HumanA::~HumanA( void )
{
	std::cout << "[ DESTROY THE HUMAN-A INSTANCE ]" << std::endl;
}

std::string	HumanA::getName( void )
{
	return this->_name;
}

void	HumanA::setName( std::string name )
{
	this->_name = name;
}

void		HumanA::attack( void )
{
	std::cout << this->_name << " attacks with his " << this->getWeapon().getType() << std::endl;
}

Weapon&		HumanA::getWeapon( void )
{
	return *this->_weapon;
}

void		HumanA::setWeapon( Weapon& myWeapon )
{
	this->_weapon = &myWeapon;
}