/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 18:40:12 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/27 12:05:40 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA
{

private:
	
	std::string	 _name;
	Weapon* _weapon;
	
public:

	HumanA( std::string name, Weapon& myWeapon );
	~HumanA( void );
	
	std::string getName( void );
	void		setName( std::string name );

	void		attack( void );
	
	Weapon&		getWeapon( void );
	void		setWeapon( Weapon& myWeapon );
};

#endif