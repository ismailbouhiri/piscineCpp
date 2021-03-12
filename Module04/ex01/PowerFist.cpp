/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:54:40 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/12 19:33:38 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist( void )
{
	this->_Name = "Power Fist";
	this->_Damage = 50;
	this->_ApCost = 8;
}

PowerFist::~PowerFist ( void )
{}

PowerFist::PowerFist(PowerFist const& CObj)
{
	*this = CObj; 
}
	
PowerFist& PowerFist::operator=(PowerFist const& Obj)
{
	this->_Name		=	Obj._Name;
	this->_ApCost	=	Obj._ApCost;
	this->_Damage	=	Obj._Damage;

	return *this;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
