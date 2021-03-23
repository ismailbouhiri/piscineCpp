/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 09:35:33 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/20 12:53:59 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{

public:
	AssaultTerminator( void );
	virtual ~AssaultTerminator ( void );
	AssaultTerminator( AssaultTerminator const &CObj);
	AssaultTerminator& operator=(AssaultTerminator const &CObj);

	virtual ISpaceMarine* clone( void ) const;
	virtual void battleCry( void ) const;
	virtual void rangedAttack( void ) const;
	virtual void meleeAttack( void ) const;

};

#endif