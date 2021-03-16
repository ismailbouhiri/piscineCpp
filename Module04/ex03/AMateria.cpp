/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:22:41 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/14 11:22:42 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria(std::string const& type): _xp(0), _Type(type)
{}

AMateria::AMateria(AMateria const & CObj)
{
    *this = CObj;
}

AMateria::~AMateria ( void )
{}

AMateria& AMateria::operator=(AMateria const & CObj)
{
    this->_xp = CObj.getXP();
    this->_Type = CObj.getType();

    return *this;
}

std::string const& AMateria::getType( void ) const
{
    return this->_Type;
}

unsigned int    AMateria::getXP( void ) const
{
    return this->_xp;
}

void            AMateria::use(ICharacter& target)
{
    this->_xp += 10;
    if (!this->getType().compare("ice"))
    {
        std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    }
    else if (!this->getType().compare("cure"))
    {
        std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
    }
    else
        return ;
}