/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:22:54 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/14 11:22:55 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice( void )
{
    this->_Type = "ice";
    this->_xp = 0;
}

Ice::Ice( Ice const& CObj )
{
    *this = CObj;
}

Ice& Ice::operator= (Ice const& CObj )
{
    this->_xp = CObj.getXP();
    this->_Type = CObj.getType();

    return *this;
}

Ice::~Ice( void )
{}

AMateria* Ice::clone( void ) const
{
    AMateria *Materia = new Ice;
    return Materia;
}
