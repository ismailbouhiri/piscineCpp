/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 09:53:41 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/09 18:04:46 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	std::cout << "[ DEFAULT CONSTRUCTION CALLED !! ] - [ FRAGTRAP ]" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "[DESTRUCTOR CALLED !! ] - [ FRAGTRAP ]" << std::endl;
}

FragTrap::FragTrap( std::string name )
{
	std::cout << "[ OVERLOADING CONSTRUCTION CALLED !! ] - [ FRAGTRAP ]" << std::endl;
	this->_Name					=	name;
	this->_HitPoints			=	100;
	this->_MaxHitPoints 		=	100;
	this->_EnergyPoints			=	100;
	this->_MaxEnergyPoints		=	100;
	this->_Level				=	1;
	this->_MelleAttackDamage	=	30;
	this->_RangedAttackDamage	=	20;
	this->_ArmorDamagereduction	=	5;
	
}

FragTrap::FragTrap( FragTrap const& CpObj)
{
	std::cout << "[ COPY CONSTRUCTION CALLED !! ] - [ FRAGTRAP ]" << std::endl;
	*this = CpObj;
}
	
FragTrap& FragTrap::operator=(FragTrap const& obj)
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

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string	RandomAttack[5] = { "CHAWAYGRI-FLKMARA" , "CHA9LAH", "CC", "SEGFAULT-YAAA3", "RANINGAN"};
	int			RandomNumber;

	RandomNumber = rand() % 5;
	if (this->_EnergyPoints < 25)
	{
		std::cout << "[ YOU DON'T HAVE ENOUGH ENERGY ][ FRAGTRAP ] !!" << std::endl;
	}
	else
	{
		this->_EnergyPoints -= 25;
		std::cout << "FR4G-TP [ " << this->_Name << " ] ATTACK " << target <<
		" With His best Sort > [ " << RandomAttack[RandomNumber] << " ] [ #CHouf_Chi_CHwiwch_Dik_Jih ][ FRAGTRAP ] !!." << std::endl;
	}
}
