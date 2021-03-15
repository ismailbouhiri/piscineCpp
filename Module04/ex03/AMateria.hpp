/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:22:43 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/14 11:22:44 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{

protected:

    AMateria( void );

    std::string _Type;
    unsigned int _xp;

public:
    AMateria(std::string const & type);
    AMateria(AMateria const & CObj);
    ~AMateria ( void );

    AMateria& operator=(AMateria const & CObj);
    std::string const & getType( void ) const; //Returns the materia type
    unsigned int getXP( void ) const; //Returns the Materia's XP
    virtual AMateria* clone( void ) const = 0;
    virtual void use(ICharacter& target);
};

#endif