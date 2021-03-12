/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:54:50 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/12 16:29:59 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant( void )
{
	this->_HitPoint = 170;
	this->_Type = "Super Mutant";
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant ( void )
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const& CObj)
{
	std::cout << "[ COPY CONSTRUCTION CALLED !! ]" << std::endl;
	*this = CObj; 
}
	
SuperMutant& SuperMutant::operator=(SuperMutant const& Obj)
{
	this->_Type		=	Obj._Type;
	this->_HitPoint	=	Obj._HitPoint;
}

void SuperMutant::takeDamage(int amount)
{
	amount -= 3;
	Enemy::takeDamage(amount);
}
