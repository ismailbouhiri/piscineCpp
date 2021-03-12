/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:54:35 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/12 11:51:35 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( void )
{
	std::cout << "[ DEFAULT CONSTRUCTION CALLED !! ]" << std::endl;

	this->_Name = "Plasma Rifle";
	this->_Damage = 21;
	this->_ApCost = 5;
}
// PlasmaRifle::PlasmaRifle(std::string const & name, int apcost, int damage) : _Name(name), _ApCost(apcost), _Damage(damage)
// {
// 	std::cout << "[ OVERLOADING CONSTRUCTION CALLED !! ]" << std::endl;
// }

PlasmaRifle::~PlasmaRifle ( void )
{
	std::cout << "[DESTRUCTOR CALLED !! ]" << std::endl;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const& CObj)
{
	std::cout << "[ ASSIGNATION OPERATOR CALLED !! ] " << std::endl;
	*this = CObj; 
}
	
PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const& Obj)
{
	this->_Name		=	Obj._Name;
	this->_ApCost	=	Obj._ApCost;
	this->_Damage	=	Obj._Damage;
}