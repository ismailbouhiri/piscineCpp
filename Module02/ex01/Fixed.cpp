/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 11:42:38 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/02 15:35:43 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ================ OverLoading constructions =======================

Fixed::Fixed( const Fixed& copyConstractor )
{
	std::cout << "[ Copy constructor called !! ]" << std::endl;
	*this = copyConstractor;
}

Fixed::Fixed( void )
{
	std::cout << "[ Default constructor called !! ]" << std::endl;
	this->_fixedPoint = 0;
}

Fixed::Fixed( int const NumberInt )
{
	std::cout << "[ [ INT ] constructor called !! ]" << std::endl;
	this->_fixedPoint = NumberInt;
}

Fixed::Fixed( float const NumberFlaot )
{
	std::cout << "[ [ FLOAT ] constructor called !! ]" << std::endl;
	this->_fixedPoint = NumberFlaot;	
}

// ================ EndOf - OverLoading constructions - =============

Fixed::~Fixed()
{
	std::cout << "[DESTRUCTOR CALLED !! ]" << std::endl;
}

// =================== operators ====================================

void	Fixed::operator=(const Fixed &oper)
{
	std::cout << "[ Assignation operator called !!] " << std::endl;
	this->_fixedPoint = oper.getRawBits();
}

std::ofstream&	operator<<(std::ofstream &o, Fixed const& oper)
{
	o << oper.toFloat();
	return o;
}

// =================== EndOfOperators ===============================

void	Fixed::setRawBits( int const raw )
{
	std::cout << "[ getRawBits member function called !! ] " << std::endl;
	this->_fixedPoint = raw;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "[ getRawBits member function called !! ] " << std::endl;
	return this->_fixedPoint;
}

float	Fixed::toFloat( void ) const
{
	
}

int		Fixed::toInt( void ) const
{
	
}
