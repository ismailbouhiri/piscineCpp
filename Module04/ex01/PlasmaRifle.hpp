/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:54:38 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/12 15:21:46 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : virtual public AWeapon
{

public:

	PlasmaRifle( void );
	~PlasmaRifle ( void );
	PlasmaRifle(PlasmaRifle const& CObj);
	
	PlasmaRifle& operator=(PlasmaRifle const& Obj);
	void attack() const;

};

#endif