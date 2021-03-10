/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 09:53:41 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/09 16:18:58 by ibouhiri         ###   ########.fr       */
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

FragTrap::FragTrap( std::string name ) : _Name(name)
{
	std::cout << "[ OVERLOADING CONSTRUCTION CALLED !! ] - [ FRAGTRAP ]" << std::endl;
	
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
	
void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP [ " << this->_Name << " ] attacks " << target <<
	" at range, causing " << this->_RangedAttackDamage << " points of damage! *_* [ FRAGTRAP ]!." << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP [ " << this->_Name << " ] attacks " << target <<
	" at range, causing " << this->_MelleAttackDamage << " points of damage! *_* [ FRAGTRAP ]!." << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	amount				=	( (int)amount <= this->_ArmorDamagereduction ) ? 0 : amount - this->_ArmorDamagereduction;
	this->_HitPoints 	=	( (int)amount > this->_HitPoints ) ? 0 : this->_HitPoints - amount;	
	std::cout << "FR4G-TP [ " << this->_Name << " ] His Take a damage!! OH LALALA!! [ " << this->_HitPoints << " ] [ #CHouf_Chi_CHwiwch_Dik_Jih ] [ FRAGTRAP ]!!." << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	unsigned int Energy;

	if (this->_HitPoints != this->_MaxHitPoints)
	{
		Energy				 =	( (int)amount >= this->_MaxHitPoints ) ? this->_MaxHitPoints : amount;
		this->_HitPoints	 =  ( Energy + this->_HitPoints > 100 ) ? 100 : Energy + this->_HitPoints;
	}
	else
	{
		Energy				 =	( (int)amount >= this->_MaxEnergyPoints ) ? this->_MaxEnergyPoints : amount;
		this->_EnergyPoints	 =  ( Energy + this->_EnergyPoints > 100 ) ? 100 : Energy + this->_EnergyPoints;	
	}
	std::cout << " Yuuuum Yuuum !! [ ENERY BOOST ] T-Y HP = [ "<< this->_HitPoints <<" ] -- Energy = [ " << this->_EnergyPoints <<" ][ FRAGTRAP ]!!" << std::endl;
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
