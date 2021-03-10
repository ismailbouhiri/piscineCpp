/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 18:15:49 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/09 18:39:17 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( void )
{
	std::cout << "[ DEFAULT CONSTRUCTION CALLED !! ][ NinjaTrap ]" << std::endl;
}

NinjaTrap::~NinjaTrap( void )
{
	std::cout << "[DESTRUCTOR CALLED !! ][ NinjaTrap ]" << std::endl;
}

NinjaTrap::NinjaTrap( std::string name )
{
	std::cout << "[ OVERLOADING CONSTRUCTION CALLED !! ][ NinjaTrap ]" << std::endl;
	this->_Name					=	name;
	this->_HitPoints			=	60;
	this->_MaxHitPoints 		=	60;
	this->_EnergyPoints			=	120;
	this->_MaxEnergyPoints		=	120;
	this->_Level				=	1;
	this->_MelleAttackDamage	=	60;
	this->_RangedAttackDamage	=	5;
	this->_ArmorDamagereduction	=	0;
	
}

NinjaTrap::NinjaTrap( NinjaTrap const& CpObj)
{
	std::cout << "[ COPY CONSTRUCTION CALLED !! ][ NinjaTrap ]" << std::endl;
	*this = CpObj;
}
	
NinjaTrap& NinjaTrap::operator=(NinjaTrap const& obj)
{
	this->_Name					=	obj._Name;
	this->_HitPoints			=	obj._HitPoints;
	this->_MaxHitPoints			=	obj._MaxHitPoints;
	this->_EnergyPoints			=	obj._EnergyPoints;
	this->_MaxEnergyPoints		=	obj._MaxEnergyPoints;
	this->_Level 				=	obj._Level;
	this->_MelleAttackDamage	=	obj._MelleAttackDamage;
	this->_RangedAttackDamage	=	obj._RangedAttackDamage;
	this->_ArmorDamagereduction =	obj._ArmorDamagereduction;

	return (*this);
}

void NinjaTrap::ninjaShoebox( void )
{
	std::string	RandomChallange[5] = { "ADIDAS" , "NICK", "AIRMAX", "COBRA", "HLOMA"};
	int			RandomNumber;

	RandomNumber = rand() % 5;
}
