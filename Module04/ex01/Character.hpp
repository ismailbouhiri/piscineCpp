/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:54:26 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/12 19:20:25 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include "Enemy.hpp"
# include "AWeapon.hpp"

class Character
{
private:
	
	Character( void );
	
	AWeapon*	_Weapon;
	std::string _Name;
	int			_AP;

public:
	Character( std::string const & name );
	Character( Character const& CObj );
	Character& operator=( Character const& Obj );
	~Character ( void );
	
	void recoverAP( void );
	void equip( AWeapon* weapon );
	void attack( Enemy* enemy );
	
	std::string	getName( void ) const;
	AWeapon*	getWeapon( void ) const;
	int			getAp( void ) const;

};

std::ostream&	operator<<(std::ostream& out, Character const& character );
#endif