/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 09:53:41 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/09 10:20:42 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	std::cout << "[ Default CONSTRUCTION CALLED !! ]" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "[DESTRUCTOR CALLED !! ]" << std::endl;
}

FragTrap::FragTrap( std::string& name ) : _Name(name)
{
	std::cout << "[ OVERLOADING CONSTRUCTION CALLED !! ]" << std::endl;
	
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
	std::cout << "[ COPY CONSTRUCTION CALLED !! ]" << std::endl;
	*this = CpObj;
}
	
FragTrap& FragTrap::operator=(FragTrap const& obj)
{
	this->_Name					=	obj._Name;
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
	std::cout << "FR4G-TP [ " << this->_Name attacks <target> at range, causing <damage> points of damage!
}

void	FragTrap::meleeAttack(std::string const & target)
{
	
}

void	FragTrap::takeDamage(unsigned int amount)
{

}

void	FragTrap::beRepaired(unsigned int amount)
{
	
}