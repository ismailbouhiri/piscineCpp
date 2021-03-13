/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 09:35:31 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/13 10:42:15 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator( void )
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator( void )
{
	std::cout << "I’ll be back..." << std::endl;
}
void AssaultTerminator::battleCry( void ) const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack( void ) const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack( void ) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

ISpaceMarine* AssaultTerminator::clone( void ) const
{
	ISpaceMarine *CurrCopy = new AssaultTerminator;
	return CurrCopy;
}
