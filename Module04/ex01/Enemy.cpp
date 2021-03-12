/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:54:28 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/12 15:41:21 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy( void )
{
	std::cout << "[ DEFAULT CONSTRUCTION CALLED !! ]" << std::endl;
}

Enemy::~Enemy ( void )
{
	std::cout << "[DESTRUCTOR CALLED !! ]" << std::endl;
}

Enemy::Enemy(int hp, std::string const & type): _HitPoint(hp), _Type(type)
{
	std::cout << "[OVERLOADING CONSTRUCTOR CALLED !! ]" << std::endl;
}

Enemy::Enemy(Enemy const& CObj)
{
	std::cout << "[ COPY CONSTRUCTION CALLED !! ]" << std::endl;
	*this = CObj; 
}
	
Enemy& Enemy::operator=(Enemy const& Obj)
{
	this->_Type		=	Obj._Type;
	this->_HitPoint	=	Obj._HitPoint;
}

int Enemy::getHP( void ) const
{
	return this->_HitPoint;
}
std::string Enemy::getType( void ) const
{
	return this->_Type;
}

void Enemy::takeDamage(int amount)
{
	if (amount > 0)
	{
		this->_HitPoint = ((this->_HitPoint - amount) < 0) ? 0 : this->_HitPoint - amount; 
	}
	else{
		std::cout << "Negative Number !!!" << std::endl;
	}
}
