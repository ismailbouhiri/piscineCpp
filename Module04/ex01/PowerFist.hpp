/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:54:42 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/20 12:42:09 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{

public:

	PowerFist( void );
	virtual ~PowerFist ( void );
	PowerFist(PowerFist const& CObj);
	
	PowerFist& operator=(PowerFist const& Obj);
	void attack( void ) const;

};

#endif