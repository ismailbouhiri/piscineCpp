/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:56:38 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/11 19:07:18 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

# include <string>
# include <iostream>

class Victim
{

private:

	Victim( void );

	std::string _Name;
	std::string _Title;

public:
	
	~Victim ( void );
	Victim( std::string Name, std::string Title );
	Victim( Victim const& CpObj);
	Victim& operator=(Victim const& obj);
	
	std::string	Victim::getName( void ) const;
	
	void	getPolymorphed( void ) const;
};

std::ostream& operator<<(std::ostream &out, Victim const& obj );

#endif
