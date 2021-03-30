/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 12:07:12 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/30 16:12:14 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "span.hpp"

span::span( const unsigned int& n ) : _len(n)
{}

span::~span( void )
{}

span::span( const span& CObj )
{
	*this = CObj;
}

span& span::operator=( const span& CObj )
{
	this->_len = CObj._len;
	for (int i = 0; i < CObj._Vec.size(); i++) {
		this->_Vec.push_back(CObj._Vec[i]);
	}

	return *this;
}

void span::addNumber(const unsigned int& newNumber)
{
	if ( this->_Vec.size() < _len ) {
		this->_Vec.push_back(newNumber);
	}
	else {
		throw std::exception();		
	}
}

size_t& span::shortestSpan( void )
{
	
}

size_t&	span::longestSpan( void )
{
	
}