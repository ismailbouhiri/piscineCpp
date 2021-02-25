/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 09:20:52 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/25 10:25:10 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H

# include "Zombie.hpp"

class ZombieHorde{

private :
	int numberOfZombies;
	Zombie* zombiesTab[];
public :
	
	ZombieHorde( int n );
	~ZombieHorde( void );
	
	void	announce( Zombie& zombie );
	void	setNumberOfZombies( int n );
	void	setZombiesTab( Zombie* zombie, int index );
	void	doingTasks( void );

	int		getNumberOfZombies( void );
	
	Zombie*	newZombie( void );
	Zombie** getZombiesTab( void );

};

#endif