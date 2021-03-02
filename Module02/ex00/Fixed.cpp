/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 11:42:38 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/02 11:05:56 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( const Fixed& copyConstractor )
{
	std::cout << "[ Copy constructor called !! ]" << std::endl;
	*this = copyConstractor;
}

Fixed::Fixed( void )
{
	std::cout << "[ Default constructor called !! ]" << std::endl;
	this->_rawBits = 0;
}

Fixed::~Fixed()
{
	std::cout << "[DESTRUCTOR CALLED !! ]" << std::endl;
}

void	Fixed::operator=(const Fixed &oper)
{
	std::cout << "[ Assignation operator called !!] " << std::endl;
	this->_rawBits = oper.getRawBits();
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "[ getRawBits member function called !! ] " << std::endl;
	this->_rawBits = raw;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "[ getRawBits member function called !! ] " << std::endl;
	return this->_rawBits;
}
