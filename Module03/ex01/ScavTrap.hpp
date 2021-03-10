/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 16:06:39 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/09 16:22:48 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include "FragTrap.hpp"

class ScavTrap
{

private:

	ScavTrap( void );
	std::string _Name;
	
	int	_HitPoints;
	int _MaxHitPoints;
	int _EnergyPoints;
	int _MaxEnergyPoints;
	int _Level;
	int _MelleAttackDamage;
	int _RangedAttackDamage;
	int _ArmorDamagereduction;

public:
	

	ScavTrap( std::string name );
	ScavTrap( ScavTrap const& CpObj);
	~ScavTrap ( void );
	
	ScavTrap& operator=( ScavTrap const& obj );
	
	void rangedAttack( std::string const & target );
	void meleeAttack( std::string const & target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
	void challengeNewcomer( void );

};

#endif