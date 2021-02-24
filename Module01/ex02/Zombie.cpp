/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:50:41 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/24 18:39:00 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	std::cout << "CREATE [ ZOMBIE ] INSTANCE !!" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << "DESTROY [ ZOMBIE ] INSTANCE !!" << std::endl;
}

void		Zombie::announce ( void )
{
	std::cout << "Hello i'm zombie, My name is [ " << this->getName()
	<< " ]  there is lot of zomebies type!!. My type is [ " << this->getType()
	<< " ]!!, ..." << std::endl;
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