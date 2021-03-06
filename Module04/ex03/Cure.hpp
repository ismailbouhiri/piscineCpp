/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:22:52 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/20 13:03:19 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{

public:
    Cure( void );
    Cure( Cure const& CObj );
    Cure& operator= (Cure const& CObj );
    virtual ~Cure( void );

    virtual AMateria* clone( void ) const;
};

#endif