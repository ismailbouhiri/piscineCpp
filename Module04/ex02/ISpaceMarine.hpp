/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 09:35:36 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/13 10:35:50 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
#define ISPACEMARINE_HPP

# include <iostream>

class ISpaceMarine
{
	
public:

	virtual ~ISpaceMarine ( void ) {}
	virtual ISpaceMarine* clone() const = 0;
	virtual void battleCry( void ) const = 0;
	virtual void rangedAttack( void ) const = 0;
	virtual void meleeAttack( void ) const = 0;
};

#endif