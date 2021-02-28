/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 18:40:16 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/27 12:18:14 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{

private:
	
	std::string _name;
	Weapon*		_weapon;
	
public:

	HumanB( std::string name );
	~HumanB( void );
	
	std::string getName( void );
	void 		setName( std::string name );
	void		attack( void );
	
	Weapon&		getWeapon( void );
	void		setWeapon( Weapon& myWeapon );
};

#endif