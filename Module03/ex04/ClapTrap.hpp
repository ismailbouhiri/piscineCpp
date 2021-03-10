/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 16:56:55 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/10 12:45:57 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{

protected:
	
	ClapTrap( void );
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

	ClapTrap( std::string name );
	ClapTrap( ClapTrap const& CpObj);
	~ClapTrap ( void );
	
	ClapTrap& operator=(ClapTrap const& obj);
	
	void rangedAttack(std::string const & target) const;
	void meleeAttack(std::string const & target) const;
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif