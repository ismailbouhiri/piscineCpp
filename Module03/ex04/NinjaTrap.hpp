/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 18:15:52 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/10 12:39:56 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{

protected:

	NinjaTrap( void );

public:
	
	NinjaTrap( std::string name );
	NinjaTrap( NinjaTrap const& CpObj);
	~NinjaTrap ( void );

	NinjaTrap& operator=( NinjaTrap const& obj );
	
	void ninjaShoebox(const FragTrap &obj) const;
	void ninjaShoebox(const ScavTrap &obj) const;
	void ninjaShoebox(const NinjaTrap &obj) const;

};

#endif