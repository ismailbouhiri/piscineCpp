/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 09:20:52 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/26 10:53:57 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H

# include "Zombie.hpp"

class ZombieHorde{

private :
	int 	_numberOfZombies;
	Zombie*	_zombiesTab;
public :
	
	ZombieHorde( int n );
	~ZombieHorde( void );
	
	void	announce( Zombie& zombie );
	void	setNumberOfZombies( int n );
	void	doingTasks( void );
	void	setZombieType( Zombie & obj );
	
	int		getNumberOfZombies( void );
	
	Zombie	newZombie( std::string name );

};

#endif