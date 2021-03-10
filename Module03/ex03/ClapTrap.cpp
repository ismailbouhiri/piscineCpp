/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 16:47:49 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/09 18:20:34 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	std::cout << "[ DEFAULT CONSTRUCTION CALLED !! ] - [ ClapTrap ]" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "[DESTRUCTOR CALLED !! ] - [ ClapTrap ]" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _Name(name)
{
	std::cout << "[ OVERLOADING CONSTRUCTION CALLED !! ] - [ ClapTrap ]" << std::endl;
	
	this->_HitPoints			=	100;
	this->_MaxHitPoints 		=	100;
	this->_EnergyPoints			=	100;
	this->_MaxEnergyPoints		=	100;
	this->_Level				=	1;
	this->_MelleAttackDamage	=	30;
	this->_RangedAttackDamage	=	20;
	this->_ArmorDamagereduction	=	5;
	
}

ClapTrap::ClapTrap( ClapTrap const& CpObj)
{
	std::cout << "[ COPY CONSTRUCTION CALLED !! ] - [ ClapTrap ]" << std::endl;
	*this = CpObj;
}
	
ClapTrap& ClapTrap::operator=(ClapTrap const& obj)
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
	
void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP [ " << this->_Name << " ] attacks " << target <<
	" at range, causing " << this->_RangedAttackDamage << " points of damage! *_* [ ClapTrap ]!." << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP [ " << this->_Name << " ] attacks " << target <<
	" at range, causing " << this->_MelleAttackDamage << " points of damage! *_* [ ClapTrap ]!." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	amount				=	( (int)amount <= this->_ArmorDamagereduction ) ? 0 : amount - this->_ArmorDamagereduction;
	this->_HitPoints 	=	( (int)amount > this->_HitPoints ) ? 0 : this->_HitPoints - amount;	
	std::cout << "FR4G-TP [ " << this->_Name << " ] His Take a damage!! OH LALALA!! [ " << this->_HitPoints << " ] [ #CHouf_Chi_CHwiwch_Dik_Jih ] [ ClapTrap ]!!." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int Energy;

	if (this->_HitPoints != this->_MaxHitPoints)
	{
		Energy				 =	( (int)amount >= this->_MaxHitPoints ) ? this->_MaxHitPoints : amount;
		this->_HitPoints	 =  ( Energy + this->_HitPoints > this->_MaxHitPoints ) ? this->_MaxHitPoints : Energy + this->_HitPoints;
	}
	else
	{
		Energy				 =	( (int)amount >= this->_MaxEnergyPoints ) ? this->_MaxEnergyPoints : amount;
		this->_EnergyPoints	 =  ( Energy + this->_EnergyPoints > this->_MaxEnergyPoints ) ? this->_MaxEnergyPoints : Energy + this->_EnergyPoints;	
	}
	std::cout << " Yuuuum Yuuum !! [ ENERY BOOST ] T-Y HP = [ "<< this->_HitPoints <<" ] -- Energy = [ " << this->_EnergyPoints <<" ][ ClapTrap ]!!" << std::endl;
}
