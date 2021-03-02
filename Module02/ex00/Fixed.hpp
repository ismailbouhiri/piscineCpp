/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 11:42:40 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/02 11:01:46 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{

private:

	int					_rawBits;
	static	const	int	_numberOfFractional;

public:

	Fixed( void );
	~Fixed();
	Fixed(Fixed const& copyConstractor );
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	
	void	operator=(Fixed const& oper);

};



#endif