/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 12:10:49 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/10 12:47:41 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap( void )
{
	std::cout << "[ DEFAULT CONSTRUCTION CALLED !! ][ SuperTrap ]" << std::endl;
}

SuperTrap::~SuperTrap( void )
{
	std::cout << "[DESTRUCTOR CALLED !! ][ SuperTrap ]" << std::endl;
}

SuperTrap::SuperTrap( std::string name )
{
	std::cout << "[ OVERLOADING CONSTRUCTION CALLED !! ][ SuperTrap ]" << std::endl;
	this->_Name					=	name;
	this->_HitPoints			=	FragTrap::_HitPoints;
	this->_MaxHitPoints 		=	FragTrap::_MaxHitPoints;
	this->_EnergyPoints			=	NinjaTrap::_EnergyPoints;
	this->_MaxEnergyPoints		=	NinjaTrap::_MaxEnergyPoints;
	this->_Level				=	1;
	this->_MelleAttackDamage	=	NinjaTrap::_MelleAttackDamage;
	this->_RangedAttackDamage	=	FragTrap::_RangedAttackDamage;
	this->_ArmorDamagereduction	=	FragTrap::_ArmorDamagereduction;
	
}

SuperTrap::SuperTrap( SuperTrap const& CpObj)
{
	std::cout << "[ COPY CONSTRUCTION CALLED !! ][ SuperTrap ]" << std::endl;
	*this = CpObj;
}
	
SuperTrap& SuperTrap::operator=(SuperTrap const& obj)
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

void	SuperTrap::rangedAttack(std::string const & target) const
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target) const
{
	NinjaTrap::meleeAttack(target);
}
