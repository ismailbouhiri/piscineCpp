/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:54:28 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/12 19:34:49 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy( void )
{}

Enemy::~Enemy ( void )
{}

Enemy::Enemy(int hp, std::string const & type) : _Type(type), _HitPoint(hp)
{}

Enemy::Enemy(Enemy const& CObj)
{
	*this = CObj; 
}
	
Enemy& Enemy::operator=(Enemy const& Obj)
{
	this->_Type		=	Obj._Type;
	this->_HitPoint	=	Obj._HitPoint;

	return *this;
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
		if (this->_HitPoint == 0)
			this->~Enemy();
	}
	else{
		std::cout << "Negative Number !!!" << std::endl;
	}
}
