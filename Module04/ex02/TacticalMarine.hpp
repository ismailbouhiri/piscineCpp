/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 09:35:49 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/20 12:53:47 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{

public:
	TacticalMarine( void );
	virtual ~TacticalMarine ( void );
	TacticalMarine( TacticalMarine const &CObj);
	TacticalMarine& operator=(TacticalMarine const &CObj);

	virtual ISpaceMarine* clone( void ) const;
	virtual void battleCry( void ) const;
	virtual void rangedAttack( void ) const;
	virtual void meleeAttack( void ) const;
};



#endif