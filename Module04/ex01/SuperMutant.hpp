/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:54:53 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/20 12:29:43 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{

public:
	SuperMutant( void );
	virtual ~SuperMutant ( void );
	SuperMutant( SuperMutant const& CObj );
	SuperMutant& operator=( SuperMutant const& Obj );
	virtual void takeDamage( int amount );
};

#endif
