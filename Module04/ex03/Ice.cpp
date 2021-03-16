/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:22:54 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/16 12:03:52 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice")
{}

Ice::Ice( Ice const& CObj ) : AMateria(CObj)
{
    *this = CObj;
}

Ice& Ice::operator= (Ice const& CObj )
{
    this->setXP(CObj.getXP());
    this->setType(CObj.getType());

    return *this;
}

Ice::~Ice( void )
{}

AMateria* Ice::clone( void ) const
{
    AMateria *Materia = new Ice;
    return Materia;
}
