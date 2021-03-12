/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:54:35 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/12 19:33:25 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( void )
{
	this->_Name = "Plasma Rifle";
	this->_Damage = 21;
	this->_ApCost = 5;
}

PlasmaRifle::~PlasmaRifle ( void )
{}

PlasmaRifle::PlasmaRifle( PlasmaRifle const& CObj )
{
	*this = CObj; 
}
	
PlasmaRifle& PlasmaRifle::operator=( PlasmaRifle const& Obj )
{
	this->_Name		=	Obj._Name;
	this->_ApCost	=	Obj._ApCost;
	this->_Damage	=	Obj._Damage;

	return *this;
}

void PlasmaRifle::attack( void ) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
