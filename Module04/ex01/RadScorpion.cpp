/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:54:45 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/20 12:35:00 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion( void )
{
	this->_HitPoint = 80;
	this->_Type = "RadScorpion";
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion ( void )
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const& CObj)
{
	*this = CObj; 
}
	
RadScorpion& RadScorpion::operator=(RadScorpion const& Obj)
{
	this->_Type		=	Obj._Type;
	this->_HitPoint	=	Obj._HitPoint;

	return *this;
}

