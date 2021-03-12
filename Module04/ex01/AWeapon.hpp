/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:54:22 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/12 18:41:47 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

# include <string>
# include <iostream>

class AWeapon
{

protected:

	AWeapon( void );
	
	std::string	_Name;
	
	int			_ApCost;
	int			_Damage;

public:

	AWeapon( std::string const & name, int apcost, int damage );
	~AWeapon ( void );
	AWeapon( AWeapon const& CObj );
	
	AWeapon&	operator=( AWeapon const& Obj );
	std::string  getName( void ) const;

	int getAPCost( void ) const;
	int getDamage( void ) const;
	virtual void attack( void ) const = 0;

};

#endif