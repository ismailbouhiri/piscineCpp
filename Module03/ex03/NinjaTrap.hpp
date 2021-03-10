/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 18:15:52 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/09 18:21:26 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

# include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap
{

private:

	NinjaTrap( void );

public:
	
	NinjaTrap( std::string name );
	NinjaTrap( NinjaTrap const& CpObj);
	~NinjaTrap ( void );

	NinjaTrap& operator=( NinjaTrap const& obj );
	void ninjaShoebox( void );
};

#endif