/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 09:35:42 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/14 11:18:48 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad( void )
{
	_Marines = new ISpaceMarine*[1];
    _Marines[0] = NULL;
	this->_CurrentUnits = 0;
}

Squad::~Squad ( void )
{
	for(int i = 0 ; i < _CurrentUnits; i++)
    {
        delete _Marines[i];
        _Marines[i] = NULL;    
    }
    if (_Marines)
    {
        delete [] _Marines;
        _Marines = NULL;
    }
}

int Squad::getCount( void ) const
{
	return this->_CurrentUnits;
}

Squad::Squad( Squad const& CObj )
{
	*this = CObj; 
}

Squad& Squad::operator=( Squad const& CObj )
{
	for(int i = 0 ; i < this->_CurrentUnits; i++)
    {
        delete this->_Marines[i];
        this->_Marines[i] = NULL;    
    }
    if (this->_Marines)
    {
        delete [] this->_Marines;
        this->_Marines = NULL;
    }
    this->_Marines = new ISpaceMarine*[CObj._CurrentUnits + 1];
    for(int i = 0; i < CObj._CurrentUnits; i++)
    {
        this->_Marines[i] = CObj._Marines[i]->clone();
    }
    this->_Marines[this->_CurrentUnits] = NULL;

	return *this;
}

ISpaceMarine* Squad::getUnit(int unit) const
{
	if (unit >= 0 && unit <= this->_CurrentUnits)
	{
		return this->_Marines[unit];
	}
	else
		return (NULL);
}

int 	Squad::push(ISpaceMarine* new_Marin)
{
    if (new_Marin != NULL)
    {
        int i = 0;
        ISpaceMarine *tmp[_CurrentUnits + 1];
        while (i < _CurrentUnits)
        {
            tmp[i] = _Marines[i];
            if (_Marines[i] == new_Marin)
                return _CurrentUnits;
            i++;
        }
        tmp[i] = new_Marin;
        delete [] _Marines;
        _Marines = new ISpaceMarine* [_CurrentUnits + 2];
        for(int j = 0; j < _CurrentUnits + 1 ; j++)
           {
               _Marines[j] = tmp[j];
            }
        _Marines[_CurrentUnits + 1] = NULL;
        _CurrentUnits++;
    }
    return _CurrentUnits;	
}
