/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:22:52 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/14 11:22:53 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

# include "AMateria.hpp"

class Cure : virtual public AMateria
{


public:
    Cure( void );
    Cure( Cure const& CObj );
    Cure& operator= (Cure const& CObj );
    ~Cure( void );
    virtual AMateria* clone( void ) const;
};

#endif