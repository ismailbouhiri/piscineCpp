/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:54:38 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/12 11:50:45 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : virtual public AWeapon
{

public:

	PlasmaRifle( void );
	// PlasmaRifle(std::string const & name, int apcost, int damage);
	~PlasmaRifle ( void );
	PlasmaRifle(PlasmaRifle const& CObj);
	
	PlasmaRifle& operator=(PlasmaRifle const& Obj);
	void attack() const;

};

#endif