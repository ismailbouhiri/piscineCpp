/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:54:42 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/12 16:33:12 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : virtual public AWeapon
{

public:

	PowerFist( void );
	~PowerFist ( void );
	PowerFist(PowerFist const& CObj);
	
	PowerFist& operator=(PowerFist const& Obj);
	void attack() const;

};

#endif