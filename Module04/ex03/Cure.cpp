/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:22:50 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/14 11:22:51 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure( void )
{
    this->_Type = "c    ure";
    this->_xp = 0;
}

Cure::Cure( Cure const& CObj )
{
    *this = CObj;
}

Cure& Cure::operator= (Cure const& CObj )
{
    this->_xp = CObj.getXP();
    this->_Type = CObj.getType();

    return *this;
}

Cure::~Cure( void )
{}

AMateria* Cure::clone( void ) const
{
    AMateria *Materia = new Cure;
    return Materia;
}