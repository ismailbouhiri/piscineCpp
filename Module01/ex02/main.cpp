/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:50:38 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/24 18:39:47 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ZombieEvent.hpp"

void	randomChump( void)
{
	ZombieEvent events;
	int randomNumber;
	std::string names[6] = {"Macheal", "Jack", "Noah", "Ava", "James", "Mason"};
	
	srand (time(NULL));
	randomNumber = ( rand() % 10 ) - 4;
	randomNumber *= (randomNumber < 0) ? -1 : 1;
	
	Zombie* zombie = events.newZombie(names[randomNumber]);
	zombie->announce();
	delete zombie;
}

int     main( void )
{
	
	randomChump();
	return (0);
}