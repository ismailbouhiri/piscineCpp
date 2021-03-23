/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:22:43 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/20 13:04:13 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{

private:
    
    AMateria( void );
    
    unsigned int _xp;
    std::string _Type;

public:

    AMateria(std::string const & type);
    AMateria(AMateria const & CObj);
    virtual ~AMateria ( void );
    AMateria& operator=(AMateria const & CObj);

    std::string const & getType( void ) const;
    unsigned int getXP( void ) const;
    void setXP( unsigned int );
    void setType( std::string const& type ); 
    virtual AMateria* clone( void ) const = 0;
    virtual void use(ICharacter& target);
};

#endif