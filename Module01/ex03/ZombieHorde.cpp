/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 09:20:48 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/25 11:46:06 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde( int n )
{
	this->setNumberOfZombies(n);
	*this->zombiesTab = new Zombie[n];
}

ZombieHorde::~ZombieHorde( void )
{
	Zombie** tab;
	int number;

	tab = this->getZombiesTab();
	number = this->getNumberOfZombies();

	for (int i = 0; i < number; i++)
	{
		delete tab[i];
	}
	delete [] tab;
}

void	ZombieHorde::doingTasks( void )
{
	int number;
	Zombie** tab;

	number = this->getNumberOfZombies();
	tab = this->getZombiesTab();
	
	for (int i = 0; i < number; i++)
	{
		tab[i] = this->newZombie();
		tab[i]->announce();
	}
	tab[this->getNumberOfZombies()] = '\0';
}

Zombie*		ZombieHorde::newZombie( void )
{
	std::string namesOfZombies[6] = {"Macheal", "Jack", "Noah", "Ava", "James", "Mason"};
	std::string typeOfZombies[6] = {"Biological", "Supernatural", "Chemical",
	"Technological", "Constructed", "Magic"};

	Zombie* obj = new Zombie;
	int randomNumber;

	srand (time(NULL));
	randomNumber = ( rand() % 10 ) - 4;
	randomNumber *= (randomNumber < 0) ? -1 : 1;

	obj->setName(namesOfZombies[randomNumber]);
	obj->setType(typeOfZombies[randomNumber]);

	return ( obj );
}

void		ZombieHorde::announce( Zombie& zombie )
{
	zombie.announce();
}

void		ZombieHorde::setNumberOfZombies( int n )
{
	this->numberOfZombies = n;
}

int			ZombieHorde::getNumberOfZombies( void )
{
	return this->numberOfZombies;
}
	
void		ZombieHorde::setZombiesTab( Zombie* zombie, int index )
{
	this->zombiesTab[index] = zombie;
}

Zombie**	ZombieHorde::getZombiesTab( void )
{
	return this->zombiesTab;
}