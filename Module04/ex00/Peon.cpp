/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:56:26 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/20 12:22:34 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Peon.hpp"

Peon::Peon( void )
{}

Peon::~Peon( void )
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon( std::string Name): Victim::Victim(Name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon( Peon const& CpObj)
{
	*this = CpObj;
}

Peon&	Peon::operator=(Peon const& obj)
{
	this->_Name		=	obj._Name;

	return (*this);
}


void	Peon::getPolymorphed( void ) const
{
	std::cout << this->_Name << " has been turned into a pink pony!" << std::endl;
}

std::ostream&	operator<<(std::ostream &out, Peon const& obj )
{
	out << "I'm " << obj.getName() << " and I like otters!" << std::endl;
	return out;
}

