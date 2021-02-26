/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 09:20:48 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/26 10:32:26 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ZombieHorde.hpp"

int		g_randomNumber;

ZombieHorde::ZombieHorde( int n )
{
	this->setNumberOfZombies(n);
	this->_zombiesTab = new Zombie[n];
	this->doingTasks();
}

ZombieHorde::~ZombieHorde( void )
{
	delete [] this->_zombiesTab;
}

Zombie		ZombieHorde::newZombie( std::string name )
{
	Zombie obj;

	obj.setName( name );
	this->setZombieType( obj );
	
	return (obj);
}

void		ZombieHorde::setZombieType( Zombie & obj )
{
	std::string typeOfZombies[6] = {"Biological", "Supernatural",
	"Chemical", "Technological", "Constructed", "Magic"};
	
	srand (time(NULL));
	g_randomNumber += rand() % 100 ;
	g_randomNumber = g_randomNumber % 6;

	obj.setType(typeOfZombies[g_randomNumber]);
}

void	ZombieHorde::doingTasks( void )
{
	std::string names[6] = {"Macheal", "Jack", "Noah", "Ava", "James", "Mason"};

	for(int i = 0; i < this->getNumberOfZombies(); i++)
	{
		srand (time(NULL));
		g_randomNumber += rand() % 100 ;
		g_randomNumber = g_randomNumber % 6;
		this->_zombiesTab[i] = this->newZombie(names[g_randomNumber]);
		this->announce(_zombiesTab[i]);
	}
}

void		ZombieHorde::announce( Zombie& zombie )
{
	zombie.announce();
}

void		ZombieHorde::setNumberOfZombies( int n )
{
	this->_numberOfZombies = n;
}

int			ZombieHorde::getNumberOfZombies( void )
{
	return this->_numberOfZombies;
}
