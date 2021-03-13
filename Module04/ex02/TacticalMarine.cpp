/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 09:35:46 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/13 10:53:56 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine( void )
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine( void )
{
	std::cout << "Aaargh..." << std::endl;
}
void TacticalMarine::battleCry( void ) const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack( void ) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack( void ) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

ISpaceMarine* TacticalMarine::clone( void ) const
{
	ISpaceMarine *CurrCopy = new TacticalMarine;
	return CurrCopy;
}
