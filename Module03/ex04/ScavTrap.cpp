/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 16:06:35 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/09 18:07:03 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	std::cout << "[ DEFAULT CONSTRUCTION CALLED !! ][ SCAVTRAP ]" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "[DESTRUCTOR CALLED !! ][ SCAVTRAP ]" << std::endl;
}

ScavTrap::ScavTrap( std::string name )
{
	std::cout << "[ OVERLOADING CONSTRUCTION CALLED !! ][ SCAVTRAP ]" << std::endl;
	this->_Name					=	name;
	this->_HitPoints			=	100;
	this->_MaxHitPoints 		=	100;
	this->_EnergyPoints			=	50;
	this->_MaxEnergyPoints		=	50;
	this->_Level				=	1;
	this->_MelleAttackDamage	=	20;
	this->_RangedAttackDamage	=	15;
	this->_ArmorDamagereduction	=	3;
	
}

ScavTrap::ScavTrap( ScavTrap const& CpObj)
{
	std::cout << "[ COPY CONSTRUCTION CALLED !! ][ SCAVTRAP ]" << std::endl;
	*this = CpObj;
}
	
ScavTrap& ScavTrap::operator=(ScavTrap const& obj)
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

void ScavTrap::challengeNewcomer( void )
{
	std::string	RandomChallange[5] = { "TROMBIYA" , "MI9AS-7AJAR-WARA9", "DUP", "LBI", "SALAMBO"};
	int			RandomNumber;

	RandomNumber = rand() % 5;
	std::cout << "I challange you to Play with Me [ " << RandomChallange[RandomNumber] << " ]!!? [ SCAVTRAP ] !! " << std::endl;
}

