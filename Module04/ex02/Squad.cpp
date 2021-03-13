/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 09:35:42 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/13 11:08:04 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad( void )
{
	std::cout << " [ Create = The current Unit : " << this->CurrentUnits << " ]"<<  std::endl;
	this->CurrentUnits += 1;
}

Squad::~Squad ( void )
{
	this->CurrentUnits -= 1;
	std::cout << " [ Destroy = The current Unit : " << this->CurrentUnits << " ]"<< std::endl;
}

int Squad::getCount( void ) const
{
	return this->CurrentUnits;
}

ISpaceMarine* Squad::getUnit(int unit) const
{
	if (unit >= 0)
	{
		
	}
	else
		return (NULL);
}
