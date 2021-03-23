/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:56:33 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/20 12:14:32 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"
# include "Peon.hpp"

class Sorcerer
{

private:

	Sorcerer( void );
	std::string _Name;
	std::string _Title;

public:
	
	~Sorcerer ( void );
	Sorcerer( std::string Name, std::string Title );
	Sorcerer( Sorcerer const& CpObj);
	Sorcerer& operator=(Sorcerer const& obj);
	std::string getName( void ) const ;
	std::string getTitle( void ) const ;
	void polymorph(Victim const &) const;

};

std::ostream& operator<<(std::ostream &out, Sorcerer const& obj );
#endif