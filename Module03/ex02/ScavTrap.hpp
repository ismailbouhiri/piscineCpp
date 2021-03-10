/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 16:06:39 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/09 18:10:13 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include "FragTrap.hpp"

class ScavTrap : public ClapTrap
{

private:

	ScavTrap( void );

public:
	

	ScavTrap( std::string name );
	ScavTrap( ScavTrap const& CpObj);
	~ScavTrap ( void );
	ScavTrap& operator=( ScavTrap const& obj );

	void challengeNewcomer( void );

};

#endif