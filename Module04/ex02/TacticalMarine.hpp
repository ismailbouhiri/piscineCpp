/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 09:35:49 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/13 10:46:46 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine : virtual public ISpaceMarine
{

public:
	TacticalMarine(/* args */);
	~TacticalMarine();
	virtual ISpaceMarine* clone( void ) const;
	virtual void battleCry( void ) const;
	virtual void rangedAttack( void ) const;
	virtual void meleeAttack( void ) const;
	TacticalMarine( TacticalMarine const &CObj);
	TacticalMarine& operator=(TacticalMarine const &CObj);
};



#endif