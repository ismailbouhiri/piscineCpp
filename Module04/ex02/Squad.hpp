/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 09:35:44 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/13 11:18:40 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

# include "ISquad.hpp"

class Squad : virtual public ISquad, virtual public ISpaceMarine
{
	
private:

	int CurrentUnits;

public:

	Squad( void );
	~Squad ( void );
	virtual int getCount( void ) const;
	virtual ISpaceMarine* getUnit(int unit) const;
	virtual int push(ISpaceMarine* tab);
};

#endif