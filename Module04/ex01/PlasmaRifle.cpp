/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:54:35 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/12 15:21:37 by ibouhiri         ###   ########.fr       */
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

PlasmaRifle::~PlasmaRifle ( void )
{
	std::cout << "[DESTRUCTOR CALLED !! ]" << std::endl;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const& CObj)
{
	std::cout << "[ COPY CONSTRUCTION CALLED !! ]" << std::endl;
	*this = CObj; 
}
	
PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const& Obj)
{
	std::cout << "[ ASSIGNATION OPERATOR CALLED !! ] " << std::endl;
	this->_Name		=	Obj._Name;
	this->_ApCost	=	Obj._ApCost;
	this->_Damage	=	Obj._Damage;
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
