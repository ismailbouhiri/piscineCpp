/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:56:33 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/11 19:09:17 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

# include <string>
# include <iostream>

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
	// void polymorph(Victim const &) const;

};

std::ostream& operator<<(std::ostream &out, Sorcerer const& obj );
#endif