/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:56:31 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/18 16:20:20 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Sorcerer.hpp"


Sorcerer::Sorcerer( void )
{}

Sorcerer::~Sorcerer( void )
{
	std::cout << this->_Name <<", " << this->_Title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer( std::string Name, std::string Title ) : _Name(Name), _Title(Title)
{
	std::cout << this->_Name<< ", " << this->_Title << ", is born!"<< std::endl;
	
}

Sorcerer::Sorcerer( Sorcerer const& CpObj)
{
	*this = CpObj;
}

Sorcerer&	Sorcerer::operator=(Sorcerer const& obj)
{
	this->_Name		=	obj._Name;
	this->_Title	=	obj._Title;

	return (*this);
}

std::string	Sorcerer::getName( void ) const 
{
	return this->_Name;
}

std::string	Sorcerer::getTitle( void ) const
{
	return this->_Title;
}

void	Sorcerer::polymorph(Victim const &v) const
{
	v.getPolymorphed();
}

std::ostream& operator<<(std::ostream &out, Sorcerer const& obj )
{
	out << "I am "<< obj.getName() << ", " << obj.getTitle() << ", and I like ponies!" << std::endl;
	return out;
}
