/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:54:19 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/12 19:32:01 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon( void ){}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _Name(name), _ApCost(apcost), _Damage(damage)
{}

AWeapon::~AWeapon ( void )
{}

AWeapon::AWeapon(AWeapon const& CObj)
{	
	*this = CObj; 
}
	
AWeapon& AWeapon::operator=(AWeapon const& Obj)
{
	this->_Name		=	Obj._Name;
	this->_ApCost	=	Obj._ApCost;
	this->_Damage	=	Obj._Damage;

	return *this;
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