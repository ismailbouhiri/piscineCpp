/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 09:53:45 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/09 16:05:21 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main( void )
{
	srand(time(NULL));
	FragTrap player("ismail");
	player.takeDamage(15);
	player.meleeAttack("Player1");
	player.vaulthunter_dot_exe("player2");
	player.vaulthunter_dot_exe("player3");
	player.vaulthunter_dot_exe("player4");
	player.vaulthunter_dot_exe("player5");
	player.vaulthunter_dot_exe("player6");
	player.beRepaired(25);
	player.beRepaired(25);
	player.vaulthunter_dot_exe("player7");

	std::cout << " -------------------------------------------------------- " << std::endl;

	FragTrap player1(player);
	player1.takeDamage(15);
	player1.meleeAttack("player");
	player1.vaulthunter_dot_exe("player2");
	player1.vaulthunter_dot_exe("player3");
	player1.vaulthunter_dot_exe("player4");
	player1.vaulthunter_dot_exe("player5");
	player1.vaulthunter_dot_exe("player6");
	player1.beRepaired(25);
	player1.beRepaired(25);
	player1.beRepaired(25);
	player1.vaulthunter_dot_exe("player7");
	return (0);
}