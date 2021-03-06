/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 18:40:12 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/06 14:46:35 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

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