/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:22:56 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/16 12:37:37 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

# include "AMateria.hpp"

class Ice : virtual public AMateria
{

public:
    Ice( void );
    Ice( Ice const& CObj );
    Ice& operator= (Ice const& CObj );
    virtual ~Ice( void );
    virtual AMateria* clone( void ) const;
};

#endif