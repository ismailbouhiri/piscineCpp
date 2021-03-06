/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 18:40:16 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/06 14:46:41 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

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