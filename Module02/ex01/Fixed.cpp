/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 11:42:38 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/07 15:19:13 by ibouhiri         ###   ########.fr       */
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
	this->_fixedPoint =  NumberInt * (1 << Fixed::_numberOfFractional);
}

Fixed::Fixed( float const NumberFlaot )
{
	std::cout << "[ [ FLOAT ] constructor called !! ]" << std::endl;
	this->_fixedPoint =  roundf(NumberFlaot * (1 << Fixed::_numberOfFractional));
}

// ================ EndOf - OverLoading constructions - =============

Fixed::~Fixed()
{
	std::cout << "[DESTRUCTOR CALLED !! ]" << std::endl;
}

// =================== operators ====================================

void	Fixed::operator=( const Fixed &oper )
{
	std::cout << "[ Assignation operator called !!] " << std::endl;
	this->_fixedPoint = oper.getRawBits();
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
	return (float)this->_fixedPoint / (1 << Fixed::_numberOfFractional);
}

int		Fixed::toInt( void ) const
{
	return this->_fixedPoint / (1 << Fixed::_numberOfFractional);
}

std::ostream&	operator<<(std::ostream& out ,Fixed const& oper )
{
	out << oper.toFloat();
	return out;
}