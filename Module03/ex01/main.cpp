/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 09:53:45 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/09 16:39:43 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int		main( void )
{
	srand(time(NULL));
	FragTrap player("Frag");

	player.takeDamage(15);
	player.meleeAttack("Player1");
	player.rangedAttack("Scav");
	player.vaulthunter_dot_exe("player2");
	player.beRepaired(25);

	std::cout << " -------------------------------------------------------- " << std::endl;

	ScavTrap player1("Scav");
	player1.takeDamage(50);
	player1.meleeAttack("player");
	player1.rangedAttack("Frag");
	
	player1.challengeNewcomer();
	player1.challengeNewcomer();
	player1.beRepaired(25);
	return (0);
}