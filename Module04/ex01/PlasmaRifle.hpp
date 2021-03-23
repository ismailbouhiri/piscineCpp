/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:54:38 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/20 12:41:31 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{

public:

	PlasmaRifle( void );
	virtual ~PlasmaRifle ( void );
	PlasmaRifle(PlasmaRifle const& CObj);
	
	PlasmaRifle& operator=(PlasmaRifle const& Obj);
	void attack() const;

};

#endif