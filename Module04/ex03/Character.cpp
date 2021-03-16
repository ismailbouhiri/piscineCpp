/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:22:45 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/16 16:34:40 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character( void )
{}

Character::Character( std::string const& name ) : _Name(name)
{
    this->_Materias = new AMateria*[5];
    for ( int i = 0; i < 5; i++ )
        this->_Materias[i] = NULL;
}

Character::Character( Character const& CObj )
{
    *this = CObj;
}

Character& Character::operator=( Character const& CObj )
{
    if (this->_Materias)
    {
        for ( int i = 0; i < 4; i++ )
        {
            if ( this->_Materias[i] )
			{
				delete this->_Materias[i];
				this->_Materias[i] = NULL;
			}
        }
        delete [] this->_Materias;
		this->_Materias = nullptr;
    }

    this->_Materias = new AMateria*[5];
    this->_Materias[4] = NULL;
    for ( int i = 0; i < 4; i++ )
    {
        if ( CObj._Materias[i] )
            this->_Materias[i] = CObj._Materias[i]->clone();
        else
            this->_Materias[i] = NULL;
    }
    return *this;
}

Character::~Character ( void )
{
    for ( int i = 0; i < 4; i++ )
    {
        if ( this->_Materias[i] )
		{
			delete this->_Materias[i];
			this->_Materias[i] = NULL;
		}
    }
    delete [] this->_Materias;
}

std::string const & Character::getName( void ) const
{
    return this->_Name;
}

void Character::equip(AMateria* m)
{

    for (int i = 0; i < 4; i++)
    {
        if (!this->_Materias[i])
        {
            this->_Materias[i] = m->clone();
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        this->_Materias[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4)
    {
        this->_Materias[idx]->use(target);
    }
}
