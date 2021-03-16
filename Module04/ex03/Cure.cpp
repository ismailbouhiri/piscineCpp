/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:22:50 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/16 11:31:58 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure( void ):AMateria("cure")
{
}

Cure::Cure( Cure const& CObj ):AMateria(CObj)
{
    *this = CObj;
}

Cure& Cure::operator= (Cure const& CObj )
{
    this->setXP(CObj.getXP());
    this->setType(CObj.getType());

    return *this;
}

Cure::~Cure( void )
{}

AMateria* Cure::clone( void ) const
{
    AMateria *Materia = new Cure;
    return Materia;
}