/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 18:40:24 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/27 12:09:34 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

# include <string>
# include <iostream>

class Weapon
{
private:

	std::string _Type;

public:

	Weapon( std::string type );
	~Weapon( void );
	
	const std::string&	getType( void );
	
	void	setType( std::string type );

};


#endif