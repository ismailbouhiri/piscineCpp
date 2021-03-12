/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:56:26 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/12 12:16:35 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Peon.hpp"

Peon::Peon( void )
{
	std::cout << "[ DEFAULT CONSTRUCTION CALLED !! ]" << std::endl;
}

Peon::~Peon( void )
{
	std::cout << "Victim " << this->_Name << " just died for no apparent reason!" << std::endl;
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon( std::string Name) 
{
	this->_Name = Name;
	std::cout << "Some random victim called " << this->_Name << " just appeared!"<< std::endl;
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon( Peon const& CpObj)
{
	std::cout << "[ COPY CONSTRUCTION CALLED !! ]" << std::endl;
	*this = CpObj;
}

Peon&	Peon::operator=(Peon const& obj)
{
	std::cout << "[ ASSIGNATION OPERATOR CALLED !! ] " << std::endl;
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

