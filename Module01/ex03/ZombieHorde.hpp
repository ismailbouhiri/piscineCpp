/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 09:20:52 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/06 14:46:23 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

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