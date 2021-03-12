/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:56:35 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/12 10:14:04 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Victim.hpp"

Victim::Victim( void )
{
	std::cout << "[ DEFAULT CONSTRUCTION CALLED !! ]" << std::endl;
}

Victim::~Victim( void )
{
	std::cout << "Victim " << this->_Name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim( std::string Name) : _Name(Name)
{
	std::cout << "Some random victim called " << this->_Name << " just appeared!"<< std::endl;
}

Victim::Victim( Victim const& CpObj)
{
	std::cout << "[ COPY CONSTRUCTION CALLED !! ]" << std::endl;
	*this = CpObj;
}

Victim&	Victim::operator=(Victim const& obj)
{
	std::cout << "[ ASSIGNATION OPERATOR CALLED !! ] " << std::endl;
	this->_Name		=	obj._Name;

	return (*this);
}

std::string	Victim::getName( void ) const
{
	return this->_Name;
}

void	Victim::getPolymorphed( void ) const
{
	std::cout << this->_Name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream& operator<<(std::ostream &out, Victim const& obj )
{
	out << "I'm " << obj.getName() << " and I like otters!" << std::endl;;
	return out;
}

