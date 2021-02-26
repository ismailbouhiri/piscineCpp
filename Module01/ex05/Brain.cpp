/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:08:52 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/26 17:59:59 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "[ CREATE THE BRAIN INSTANCE ]" << std::endl;
}

Brain::~Brain( void )
{
	std::cout << "[ DESTROY THE BRAIN INSTANCE ]" << std::endl;
}

std::string		Brain::identify( void ) const
{
	const Brain* address = this;
	std::stringstream addr;

	addr << address;

	return ( addr.str() ); 
}
