/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 11:42:40 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/06 12:48:47 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{

private:

	int					_fixedPoint;
	static	const	int	_numberOfFractional = 8;

public:

	Fixed( void );
	Fixed( int const NumberInput );
	Fixed( Fixed const& copyConstractor );
	Fixed( float const NumberInput );

	~Fixed();

	int toInt( void ) const;
	int getRawBits( void ) const;

	float toFloat( void ) const;

	void setRawBits( int const raw );
	void	operator=( Fixed const& oper );
};

std::ostream&	operator<<(std::ostream& out ,Fixed const& oper );

#endif