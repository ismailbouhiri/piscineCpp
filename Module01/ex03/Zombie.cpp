/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:50:41 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/25 09:09:31 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	return ;
}

Zombie::~Zombie( void )
{
	return ;
}

void		Zombie::announce ( void )
{
	std::cout << "< [ " << this->getName() << " ] ( " << this->getType()
	<< " ) > Braiiiiiiinnnssss... !!" << std::endl;
}

void		Zombie::setName( std::string name )
{
	this->name = name;
}

void		Zombie::setType( std::string type )
{
	this->type = type;
}

std::string	Zombie::getName( void )
{
	return this->name;
}

std::string	Zombie::getType( void )
{
	return this->type;
}