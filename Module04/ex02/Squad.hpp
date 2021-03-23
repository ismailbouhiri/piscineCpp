/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 09:35:44 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/20 12:51:12 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

# include "ISquad.hpp"

class Squad : public ISquad
{
	
private:

	ISpaceMarine** _Marines;
	int _CurrentUnits;

public:

	Squad( void );
	Squad( Squad const& CObj );
	virtual ~Squad ( void );
	
	Squad& operator=( Squad const& CObj );
	virtual int getCount( void ) const;
	virtual ISpaceMarine* getUnit(int unit) const;
	virtual int push(ISpaceMarine* squad);
};

#endif