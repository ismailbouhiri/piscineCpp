/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 11:42:40 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/02 15:55:15 by ibouhiri         ###   ########.fr       */
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
	Fixed( int NumberInput );
	Fixed(Fixed const& copyConstractor );
	Fixed( int NumberInput );
	Fixed( float const NumberInput );

	~Fixed();

	int toInt( void ) const;
	int getRawBits( void ) const;

	float toFloat( void ) const;

	void setRawBits( int const raw );
	void	operator=(Fixed const& oper);
	float	operator<<(Fixed const& oper);
};



#endif