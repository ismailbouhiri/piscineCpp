/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 12:10:51 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/10 12:47:45 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP


# include "NinjaTrap.hpp"

class SuperTrap : virtual public FragTrap ,virtual public NinjaTrap
{

private:
	
	SuperTrap( void );

public:
	SuperTrap( std::string name );
	SuperTrap( SuperTrap const& CpObj);
	~SuperTrap ( void );

	SuperTrap& operator=( SuperTrap const& obj );
	void	rangedAttack(std::string const & target) const ;
	void	meleeAttack(std::string const & target) const ;

};

#endif