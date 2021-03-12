/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:56:29 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/12 10:44:07 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

# include <string>
# include <iostream>
# include  "Victim.hpp"
class Peon : virtual public Victim
{

private:

	Peon( void );

public:
	
	~Peon ( void );
	Peon( std::string Name);
	Peon( Peon const& CpObj);
	Peon& operator=(Peon const& obj);

	virtual void	getPolymorphed( void ) const;
};

std::ostream& operator<<(std::ostream &out, Peon const& obj );


#endif