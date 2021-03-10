/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 09:53:45 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/10 15:01:04 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include "SuperTrap.hpp"

int		main( void )
{
	srand(time(NULL));
	FragTrap Frag("Frag");

	Frag.takeDamage(15);
	Frag.meleeAttack("Player1");
	Frag.rangedAttack("Scav");
	Frag.vaulthunter_dot_exe("player2");
	Frag.beRepaired(25);

	std::cout << " -------------------------------------------------------- " << std::endl;

	ScavTrap Scav("Scav");
	Scav.takeDamage(50);
	Scav.meleeAttack("player");
	Scav.rangedAttack("Frag");
	Scav.challengeNewcomer();
	Scav.challengeNewcomer();
	Scav.beRepaired(25);

	std::cout << " -------------------------------------------------------- " << std::endl;

	NinjaTrap Ninja("Ninja");
	Ninja.takeDamage(50);
	Ninja.meleeAttack("Scav");
	Ninja.rangedAttack("Frag");
	
	Ninja.ninjaShoebox(Scav);
	Ninja.ninjaShoebox(Ninja);
	Ninja.ninjaShoebox(Frag);
	Ninja.beRepaired(25);
	
	std::cout << " -------------------------------------------------------- " << std::endl;

	SuperTrap Super("Super");
	Super.takeDamage(50);
	Super.meleeAttack("Scav");
	Super.rangedAttack("Frag");
	Super.vaulthunter_dot_exe("Mamoussa");
	Super.ninjaShoebox(Ninja);
	Super.beRepaired(25);
	return (0);
}