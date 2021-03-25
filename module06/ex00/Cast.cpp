/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 12:06:33 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/25 12:11:06 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cast.hpp"

Cast::Cast( char *ptr ) : _N(ptr)
{}

Cast::~Cast( void ){}

Cast::Cast( const Cast& CObj)
{
	*this = CObj;
}

Cast& Cast::operator=( const Cast& CObj)
{
	this->_N = CObj._N;
	return *this;
}