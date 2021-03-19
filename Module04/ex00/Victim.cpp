/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:56:35 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/18 16:20:17 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Victim.hpp"

Victim::Victim( void )
{}

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
	*this = CpObj;
}

Victim&	Victim::operator=(Victim const& obj)
{
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

