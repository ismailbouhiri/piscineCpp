/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 12:07:12 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/31 10:49:20 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "span.hpp"

Span::Span( const unsigned int& n ) : _len(n)
{}

Span::~Span( void )
{}

Span::Span( const Span& CObj )
{
	*this = CObj;
}

Span& Span::operator=( const Span& CObj )
{
	this->_len = CObj._len;
	for (int i = 0; i < static_cast<int>(CObj._Vec.size()); i++) {
		this->_Vec.push_back(CObj._Vec[i]);
	}

	return *this;
}

void Span::addNumber( const std::vector<int>::iterator& begin, const std::vector<int>::iterator& end)
{
	std::vector<int>::iterator it;
	for (it = begin; it != end; it++)
	{
		if  (this->_Vec.size() >= _len)
			throw std::exception();		
		this->_Vec.push_back(*it);
	}
}

void Span::addNumber(const unsigned int& newNumber)
{
	if ( this->_Vec.size() < _len ) {
		this->_Vec.push_back(newNumber);
	}
	else {
		throw std::exception();		
	}
}

int		Span::shortestSpan( void )
{
	long long shortest;
	
	if ( this->_Vec.size() == 1 || this->_Vec.empty() )
	{
        throw std::exception();
	}
    std::sort( this->_Vec.begin(), this->_Vec.end() );
    for ( size_t i = 0; i < this->_Vec.size() - 1; i++ )
	{
        if ( static_cast<long long>( this->_Vec[i + 1] ) - static_cast<long long>( this->_Vec[i] ) < shortest )
		{
            shortest = this->_Vec[i + 1] - this->_Vec[i];
		}
	}
    return static_cast<int>( shortest );
}

int		Span::longestSpan( void )
{
    if ( this->_Vec.size() == 1 || this->_Vec.empty() )
        throw std::exception();
    return ( static_cast<int>( static_cast<long>( *std::max_element(this->_Vec.begin(), this->_Vec.end() ) ) \
	- static_cast<long>( *std::min_element( this->_Vec.begin(), this->_Vec.end() ) ) ) );
}