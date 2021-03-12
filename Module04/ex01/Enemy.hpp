/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:54:31 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/12 16:25:00 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

# include <string>
# include <iostream>

class Enemy
{
	
protected:

	Enemy( void );
	
	std::string _Type;
	int	_HitPoint;

public:

	Enemy(int hp, std::string const & type);
	~Enemy ( void );
	Enemy(Enemy const& CObj);
	Enemy& operator=(Enemy const& Obj);
	
	std::string getType( void ) const;
	
	int getHP( void ) const;
	virtual void takeDamage(int amount);

};

#endif