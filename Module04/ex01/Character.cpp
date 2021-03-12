/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:54:24 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/12 19:32:23 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character ( void )
{}

Character::Character( std::string const & name ) : _Name(name), _AP(40)
{
	this->_Weapon = NULL;
}

Character::Character( Character const& CObj )
{
	*this = CObj;
}

Character::~Character ( void )
{}


Character& Character::operator=(Character const& Obj)
{
	this->_Name = Obj._Name;
	this->_AP = Obj._AP;
	this->_Weapon = Obj._Weapon;

	return *this;
}
	
void Character::recoverAP( void )
{
	this->_AP = ((this->_AP + 10) > 40) ? 40 : this->_AP + 10;
}

void Character::equip(AWeapon* weapon)
{
	this->_Weapon = weapon;
}

void Character::attack(Enemy* enemy)
{
	if (this->_AP - this->_Weapon->getAPCost() >= 0)
	{
		this->_AP = this->_AP - this->_Weapon->getAPCost();
		std::cout << this->_Name << " attacks " << enemy->getType() << " With a " << this->_Weapon->getName() << std::endl;
		this->_Weapon->attack();
		enemy->takeDamage(this->_Weapon->getDamage());
	}
}
	
std::string	Character::getName( void ) const
{
	return this->_Name;
}

AWeapon*	Character::getWeapon( void ) const
{
	return this->_Weapon;
}

int			Character::getAp( void ) const
{
	return this->_AP;
}

std::ostream&	operator<<(std::ostream& out, Character const& character )
{
	if (character.getWeapon())
	{
		out << character.getName() << " has " << character.getAp() << " AP and wields a " << character.getWeapon()->getName() << std::endl;
	}
	else
	{
		out << character.getName() << " has " << character.getAp() << " AP and is unarmed" << std::endl;
	}

	return out;
}
