/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:23:05 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/16 16:34:13 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	this->LearnTab = new AMateria*[5];
    for ( int i = 0; i < 5; i++ )
        this->LearnTab[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const& CObj )
{
	*this = CObj;
}

MateriaSource&	MateriaSource::operator=( MateriaSource const& CObj )
{
	if (this->LearnTab)
    {
        for ( int i = 0; i < 4; i++ )
        {
            delete this->LearnTab[i];
            this->LearnTab[i] = NULL;
        }
        delete [] this->LearnTab;
		this->LearnTab = nullptr;
    }
    
    this->LearnTab = new AMateria*[5];
    this->LearnTab[4] = NULL;
    for ( int i = 0; i < 4; i++ )
    {
        if (CObj.LearnTab[i])
            this->LearnTab[i] = CObj.LearnTab[i]->clone();
        else
            this->LearnTab[i] = NULL;
    }
	return *this;
}

MateriaSource::~MateriaSource ( void )
{
	if (this->LearnTab)
    {
        for ( int i = 0; i < 4; i++ )
        {
			if ( this->LearnTab[i] )
			{
				delete this->LearnTab[i];
				this->LearnTab[i] = NULL;
			}
        }
        delete [] this->LearnTab;
		this->LearnTab = nullptr;
    }
}

void		MateriaSource::learnMateria( AMateria* Learn )
{
    for ( int i = 0; i < 4; i++ )
	{
		if ( !this->LearnTab[i])
		{
			if (Learn->getType().compare("cure")
			|| Learn->getType().compare("ice"))
			{
				this->LearnTab[i] = Learn;
				return ;
			}		
		}
	}
}

AMateria*	MateriaSource::createMateria( std::string const & type )
{
	for ( int i = 0; i < 4; i++ )
	{
		if ( this->LearnTab[i])
		{
			if (!this->LearnTab[i]->getType().compare(type))
			{
				return this->LearnTab[i];
			}
		}
	}
	return NULL;
}