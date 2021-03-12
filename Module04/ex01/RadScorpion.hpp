/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:54:48 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/12 16:30:34 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : virtual public Enemy
{
	
public:
	RadScorpion( void );
	~RadScorpion( void );
	RadScorpion( RadScorpion const& CObj );
	RadScorpion& operator=( RadScorpion const& Obj );
};

#endif