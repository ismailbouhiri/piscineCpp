/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:56:38 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/12 10:41:32 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

# include <string>
# include <iostream>

class Victim
{

protected:

	Victim( void );

	std::string _Name;

public:
	
	~Victim ( void );
	Victim( std::string Name);
	Victim( Victim const& CpObj);
	Victim& operator=(Victim const& obj);
	
	std::string	getName( void ) const;
	
	virtual void	getPolymorphed( void ) const;
};

std::ostream& operator<<(std::ostream &out, Victim const& obj );

#endif
