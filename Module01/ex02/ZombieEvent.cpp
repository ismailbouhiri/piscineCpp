/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:50:47 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/24 18:42:22 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent( void )
{
	ret
}

ZombieEvent::~ZombieEvent( void )
{
	return ;
}

Zombie*		ZombieEvent::newZombie( std::string name )
{
	Zombie* obj = new Zombie;

	obj->setName( name );
	this->setZombieType( *obj );
	
	return (obj);
}

void		ZombieEvent::setZombieType( Zombie & obj )
{
	std::string typeOfZombies[6] = {"Biological", "Supernatural",
	"Chemical", "Technological", "Constructed", "Magic"};
	int randomNumber;
	
	srand (time(NULL));
	randomNumber = ( rand() % 10 ) - 4;
	randomNumber *= (randomNumber < 0) ? -1 : 1;

	obj.setType(typeOfZombies[randomNumber]);
}
