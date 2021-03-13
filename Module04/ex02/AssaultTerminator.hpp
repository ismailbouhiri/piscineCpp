/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 09:35:33 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/13 10:43:16 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator : virtual public ISpaceMarine
{

public:
	AssaultTerminator( void );
	~AssaultTerminator ( void );
	virtual ISpaceMarine* clone( void ) const;
	virtual void battleCry( void ) const;
	virtual void rangedAttack( void ) const;
	virtual void meleeAttack( void ) const;
	AssaultTerminator( AssaultTerminator const &CObj);
	AssaultTerminator& operator=(AssaultTerminator const &CObj);

};

#endif