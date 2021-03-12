/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:54:19 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/12 11:24:13 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon( void )
{
	std::cout << "[ DEFAULT CONSTRUCTION CALLED !! ]" << std::endl;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _Name(name), _ApCost(apcost), _Damage(damage)
{
	std::cout << "[ OVERLOADING CONSTRUCTION CALLED !! ]" << std::endl;
}

AWeapon::~AWeapon ( void )
{
	std::cout << "[DESTRUCTOR CALLED !! ]" << std::endl;
}

AWeapon::AWeapon(AWeapon const& CObj)
{
	std::cout << "[ ASSIGNATION OPERATOR CALLED !! ] " << std::endl;
	*this = CObj; 
}
	
AWeapon& AWeapon::operator=(AWeapon const& Obj)
{
	this->_Name		=	Obj._Name;
	this->_ApCost	=	Obj._ApCost;
	this->_Damage	=	Obj._Damage;
}

std::string  AWeapon::getName( void ) const
{
	return this->_Name;
}

int AWeapon::getAPCost( void ) const
{
	return this->_ApCost;
}

int AWeapon::getDamage( void ) const
{
	return this->_Damage;
}