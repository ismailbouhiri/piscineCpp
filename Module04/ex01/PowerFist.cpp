/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:54:40 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/12 15:25:52 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist( void )
{
	std::cout << "[ DEFAULT CONSTRUCTION CALLED !! ]" << std::endl;

	this->_Name = "Power Fist";
	this->_Damage = 50;
	this->_ApCost = 8;
}

PowerFist::~PowerFist ( void )
{
	std::cout << "[DESTRUCTOR CALLED !! ]" << std::endl;
}

PowerFist::PowerFist(PowerFist const& CObj)
{
	std::cout << "[ COPY CONSTRUCTION CALLED !! ]" << std::endl;
	*this = CObj; 
}
	
PowerFist& PowerFist::operator=(PowerFist const& Obj)
{
	std::cout << "[ ASSIGNATION OPERATOR CALLED !! ] " << std::endl;
	this->_Name		=	Obj._Name;
	this->_ApCost	=	Obj._ApCost;
	this->_Damage	=	Obj._Damage;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
