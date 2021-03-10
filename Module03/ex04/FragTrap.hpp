/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 09:53:43 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/10 12:40:06 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

protected:
	FragTrap( void );	

public:

	FragTrap( std::string name );
	FragTrap( FragTrap const& CpObj);
	~FragTrap ( void );

	FragTrap& operator=(FragTrap const& obj);
	void vaulthunter_dot_exe(std::string const & target);
};

#endif