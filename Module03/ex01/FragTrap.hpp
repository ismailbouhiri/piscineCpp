/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 09:53:43 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/09 15:42:23 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include <string>
# include <iostream>

class FragTrap
{
private:

	FragTrap( void );
	
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

	FragTrap( std::string name );
	FragTrap( FragTrap const& CpObj);
	~FragTrap ( void );
	
	FragTrap& operator=(FragTrap const& obj);
	
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
};

#endif